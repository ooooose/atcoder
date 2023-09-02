# N, M, P = gets.chomp.split(' ').map(&:to_i)
# first_moon = N - M
# count = 0
# if first_moon < 0
#   puts 0
#   return
# end
# while first_moon >= 0
#   first_moon -= P
#   count += 1 
# end 

# puts count


# N = gets.chomp.to_i
# dimensions = []
# N.times do 
#   x_1, x_2, y_1, y_2 = gets.chomp.split(' ').map(&:to_i)
#   for i in (x_1...x_2).to_a do
#     for j in (y_1...y_2).to_a do
#       dimensions << [i,j]
#     end
#   end
# end
# p dimensions.uniq.count


N, D, P = gets.chomp.split(' ').map(&:to_i)
F = gets.chomp.split(' ').map(&:to_i)
standard = P / D
p standard
amount = 0
checked_list = F.select { |f| f > standard }
amari = checked_list.count % D
minimum_list = checked_list.min(amari)
buy_p_account = checked_list.count / D
buy_or_not = minimum_list.sum > P
if buy_or_not
  buy_p_account += 1
end
sum_ammount = 0
F.each do |f|
  if f <= standard
    sum_ammount += f
  end
end
if !buy_or_not
  sum_ammount += minimum_list.sum
end

puts sum_ammount + P * buy_p_account