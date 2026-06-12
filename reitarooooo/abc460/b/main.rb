#!/usr/bin/env ruby
T = gets.chomp.to_i

T.times do
  x_1, y_1, r_1, x_2, y_2, r_2 = gets.chomp.split(" ").map(&:to_i)

  if (r_1 - r_2) ** 2 <= (x_1 - x_2) ** 2 + (y_1 - y_2) ** 2 \
    && (x_1 - x_2) ** 2 + (y_1- y_2) ** 2 <= (r_1 + r_2) ** 2
    puts "Yes"
  else
    puts "No"
  end
end

