N = gets.to_i
@road = Array.new(N) {Array.new}
(N-1).times do
  a,b = gets.chomp.split.map(&:to_i)
  @road[a-1] << b-1
  @road[b-1] << a-1
end

def dfs(s)
  dist = [-1] * N
  dist[s] = 0
  st = [s]
  while !st.empty?
    v = st.pop
    @road[v].each do |nv|
      if dist[nv] == -1
        st << nv
        dist[nv] = dist[v] + 1
      end
    end
  end
  return dist
end

dist0 = dfs(0)
puts dfs(dist0.index(dist0.max)).max + 1