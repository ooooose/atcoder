c, t = gets.chomp.split(" ").map(&:to_i)
x = gets.chomp.split(" ").map(&:to_i)

answers = (1..c).to_a - x

puts answers.size
puts answers.join(' ')
