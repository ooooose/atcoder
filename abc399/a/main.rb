n = gets.chomp.to_i
s = gets.chomp.split('')
t = gets.chomp.split('')
ans = 0
n.times do |i|
  if s[i] != t[i]
    ans += 1
  end
end

puts ans