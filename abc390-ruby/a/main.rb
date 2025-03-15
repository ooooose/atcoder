a = gets.chomp.split(' ').map(&:to_i)

4.times do |i|
  b = a.clone
  b[i], b[i + 1] = b[i + 1], b[i]
  if b == [1, 2, 3, 4, 5]
    puts "Yes"
    return
  end
end

puts "No"
