n = gets.chomp.to_i
a_list = gets.chomp.split(' ').map(&:to_i)

bai_list = []
(n - 1).times do |i|
  bai_list << a_list[i + 1].div(a_list[i]).to_f
end

if bai_list.uniq.size == 1
  puts "Yes"
else
  puts "No"
end

