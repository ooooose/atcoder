S = gets.chomp.split("")

e_count = 0
w_count = 0

S.each do |s|
  e_count += 1 if s == "E"
  w_count += 1 if s == "W"
end

if e_count > w_count
  puts "East"
else
  puts "West"
end
