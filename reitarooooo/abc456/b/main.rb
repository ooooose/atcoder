#!/usr/bin/env ruby
a_1 = gets.chomp.split(" ").map(&:to_i)
a_2 = gets.chomp.split(" ").map(&:to_i)
a_3 = gets.chomp.split(" ").map(&:to_i)


base = 216.to_f
CORRECT_ARRAY = [4, 5, 6]
ans = 0.to_f
a_1.each do |a1|
  a_2.each do |a2|
    a_3.each do |a3|
      ans += 1 if [a1, a2, a3].sort == CORRECT_ARRAY
    end
  end
end

puts (ans / base).round(10)
