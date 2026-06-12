#!/usr/bin/env ruby
A, D = gets.chomp.split(" ").map(&:to_i)

if D >= A 
  puts "Yes"
else
  puts "No"
end

