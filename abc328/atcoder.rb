# N, X = gets.chomp.split(' ').map(&:to_i)
# S = gets.chomp.split(' ').map(&:to_i).filter{ |a| a <= X }
# puts S.sum()

# N = gets.chomp.to_i
# D = gets.chomp.split(' ').map(&:to_i)
# ans = 0
# D.each_with_index do |d, i|
#   d.times do |j|
#     month = (i + 1).to_s.split("")
#     day = (j + 1).to_s.split('')
#     target = []
#     month.each do |mon|
#       target << mon
#     end
#     day.each do |da|
#       target << da
#     end
#     if target.uniq.count() == 1
#       ans += 1 
#     end
#   end
# end

# puts ans

N, Q = gets.chomp.split(' ').map(&:to_i)
S = gets.chomp.split('')
l_list = []
Q.times do
  l = gets.chomp.split(' ').map(&:to_i)
  target = S[(l[0] - 1)..(l[1]-1)]
  if l[0] == l[1] || target.uniq.length == target.length
    puts 0
    next
  end
  spot = 0
  ans = 0
  (target.length - 1).times do
    if target[spot] == target[spot + 1]
      ans += 1
    end
    spot += 1
  end
  puts ans
end