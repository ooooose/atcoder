N, H, X = gets.chomp.split(' ').map(&:to_i)
medicines = gets.chomp.split(' ').map(&:to_i)
target = []
medicines.each do |m, i|
  if m >= X - H
    target << m
  end
end

puts medicines.index(target.min) +  1