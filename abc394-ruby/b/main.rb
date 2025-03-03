N = gets.chomp.to_i
S_list = []
N.times do
  S_list << gets.chomp
end

S_list.sort! { |a, b| a.length <=> b.length}

puts S_list.join('')
