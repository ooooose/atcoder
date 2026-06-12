#!/usr/bin/env ruby
N = gets.chomp.to_i
a_list = gets.chomp.split(" ").map(&:to_i)
b_list = gets.chomp.split(" ").map(&:to_i)

new_a_list = []
N.times do |n|
  new_a_list << [ a_list[n], n + 1 ]
end

new_a_list.sort!

ans = []
new_a_list.each do |a|
  ans << a[1]
end

if ans == b_list
  puts "Yes"
else
  puts "No"
end

