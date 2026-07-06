X, Y = gets.chomp.split(" ").map(&:to_i)

sum = (X + Y) * 16
target = X * 25 

if target == sum
  puts "Yes"
else
  puts "No"
end

