# A, B = gets.chomp.split(' ').map(&:to_i)
# puts A ** B + B ** A

# S = gets.chomp.split('')
# count = []
# for i in (0...S.length)
#   for j in (0...S.length)
#     target = S[i..j]
#     if target == target.reverse
#       count << target.length
#     end
#   end
# end
# puts count.max

M = gets.chomp.to_i
S_1 = gets.chomp.split('').map(&:to_i)
S_2 = gets.chomp.split('').map(&:to_i)
S_3 = gets.chomp.split('').map(&:to_i)
position_list = []
10.times do |m|
  pos_1 = S_1.index(m) 
  pos_2 = S_2.index(m) 
  pos_3 = S_3.index(m) 
  position_list << [pos_1, pos_2, pos_3].max
  p position_list
end
puts position_list.min