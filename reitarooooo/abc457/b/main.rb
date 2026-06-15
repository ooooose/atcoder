#!/usr/bin/env ruby
N = gets.chomp.to_i
arrays = []

N.times do |n|
  inputs = gets.chomp.split(" ").map(&:to_i)
  arrays << inputs[1..]
end

X, Y = gets.chomp.split(" ").map(&:to_i)
puts arrays[X - 1][Y - 1]
