#!/usr/bin/env ruby
N, k = gets.chomp.split(" ").map(&:to_i)

A = []
N.times do
  A << gets.split.map(&:to_i)
end

C = gets.split.map(&:to_i)

A.each_with_index do |a, idx|
  l = a[0]
  list = a[1..]
  if k <= l * C[idx]
    mod = k % l 
    puts list[mod - 1]
    return
  end
  
  k -= l * C[idx]
end
