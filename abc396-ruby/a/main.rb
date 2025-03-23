n = gets.chomp.to_i
a_list = gets.chomp.split(' ').map(&:to_i)

count = 0
(a_list.size - 1).times do |a|
  if a_list[a] == a_list[a + 1]
    count += 1
  else
    count = 0
  end
  if count >= 2
    puts "Yes"
    return
  end
end

puts "No"
