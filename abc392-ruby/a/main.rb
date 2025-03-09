a_list = gets.chomp.split(' ').map(&:to_i).sort

if a_list[0] * a_list[1] == a_list[2]
  puts "Yes"
else
  puts "No"
end
