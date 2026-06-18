#!/usr/bin/env ruby

dices = [1, 2, 3, 4, 5, 6]

sums_list = []

dices.each do |a|
  dices.each do |b|
    dices.each do |c|
      sums_list << a + b + c
    end
  end
end

sums_list.uniq!

X = gets.chomp.to_i

if sums_list.include?(X)
  puts "Yes" 
else
  puts "No"
end
