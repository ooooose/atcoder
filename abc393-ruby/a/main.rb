s_1, s_2 = gets.chomp.split(" ")

if s_1 == "sick" and s_2 == "sick"
  puts 1
elsif s_1 == "sick" and s_2 == "fine"
  puts 2
elsif s_1 == "fine" and s_2 == "sick"
  puts 3
elsif s_1 == "fine" and s_2 == "fine"
  puts 4
end
