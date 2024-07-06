#!/usr/bin/env ruby
N, K = gets.chomp.split.map(&:to_i)
passengers = gets.chomp.split.map(&:to_i)

count = 0
capacity = K

passengers.each do |p|
  if capacity >= p
    capacity -= p
  else 
    count += 1 
    capacity = K - p
  end
end

puts count + 1
