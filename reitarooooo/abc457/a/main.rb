#!/usr/bin/env ruby
N = gets.chomp.to_i
list = gets.chomp.split(" ").map(&:to_i)
X = gets.chomp.to_i - 1

puts list[X]
