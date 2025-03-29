n, m = gets.split.map(&:to_i)
edges = Array.new(m)
m.times do |i|
  edges[i] = gets.split.map(&:to_i)
end

class UnionFind
  def initialize(size)
    @rank = Array.new(size + 1, 1)
    @parent = Array.new(size + 1, &:itself)
  end

  def find(x)
    @parent[x] = find(@parent[x]) if @parent[x] != x
    @parent[x]
  end

  def union(x, y)
    root_x = find(x)
    root_y = find(y)
    return false if root_x == root_y

    if @rank[root_x] < @rank[root_y]
      @parent[root_x] = root_y
    elsif @rank[root_x] > @rank[root_y]
      @parent[root_y] = root_x
    else
      @parent[root_y] = root_x
      @rank[root_x] += 1
    end
    true
  end
end

uf = UnionFind.new(n)
cycle_edges = 0

edges.each do |u, v|
  cycle_edges += 1 unless uf.union(u, v)
end

puts cycle_edges
