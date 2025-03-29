n = gets.chomp.to_i
p = gets.chomp.split(' ').map(&:to_i)
r = 1
ranks = Array.new(n)
d = 1
n.times do |i|
  max = p.max
  max_index = p.index(max)
  ranks[max_index] = r
  p[max_index] = -1
  if !p.include?(max)
    r += d
    d = 1
  else
    d += 1
  end
end
puts ranks