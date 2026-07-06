train_map = []
X, Y = gets.chomp.split(" ")

X.to_i.times do
  train_map << gets.chomp.split("")
end

idx = ["A", "B", "C", "D", "E"].index(Y)

X.to_i.times do |x|
  if train_map[x][idx] == "o"
    puts "Yes"
    return
  end
end

puts "No"
