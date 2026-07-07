N = gets.to_i

l_h = {}

N.times do
  h, l = gets.split.map!(&:to_i)

  if l_h[l]
    l_h[l] = [l_h[l], h].max
  else
    l_h[l] = h
  end
end

ls = l_h.keys
vals = ls.map { |l| l_h[l] }

suffix = Array.new(vals.size)
suffix[-1] = vals[-1]

(vals.size - 2).downto(0) do |i|
  suffix[i] = [vals[i], suffix[i + 1]].max
end

Q = gets.to_i

gets.split.map!(&:to_i).each do |t|
  idx = ls.bsearch_index { |x| x > t }
  puts suffix[idx]
end
