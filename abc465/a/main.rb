A, B = gets.chomp.split(" ").map(&:to_i)

if (A * 3 > B * 2)
  puts "Yes"
else
  puts "No"
end
