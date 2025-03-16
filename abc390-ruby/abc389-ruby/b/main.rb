n = gets.chomp.to_i
ans = 1
count = 1
while count != n do

  ans += 1
  count *= ans
end

puts ans
