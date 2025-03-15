n = gets.chomp.to_i
a = gets.chomp.split(' ').map(&:to_i)

flag = true
(n - 2).times do |i|
  if a[i] * a[i + 2] != a[i + 1] * a[i + 1]
    flag = false
  end
end

if flag
  puts "Yes"
else
  puts "No"
end

