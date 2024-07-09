#!/usr/bin/env ruby
N, M = gets.chomp.split(' ').map(&:to_i)
space_rangers = gets.chomp.split(' ').map(&:to_i)

ans = 0
target = M

N.times do |n|
  if target >= space_rangers[n]
    target -= space_rangers[n]
  else
    break
  end
  ans = n + 1
end

puts ans
