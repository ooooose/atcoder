X, Y = gets.chomp.split(" ").map(&:to_i)

sum = (X + Y) / 25
target = X / 16

if target == sum
  puts "Yes"
else
  puts "No"
end

