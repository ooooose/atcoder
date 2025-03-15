a_list = gets.chomp.split(' ').map(&:to_i)
sorted_list = a_list.sort

count = 0

a_list.each_with_index do |a, i|
  if a != sorted_list[i]
    count += 1
  end
end

if count == 2
  puts "Yes"
else
  puts "No"
end
