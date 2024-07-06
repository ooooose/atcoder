#!/usr/bin/env ruby
A = gets.chomp.split(" ").map(&:to_i)
B = gets.chomp.split(" ").map(&:to_i)

count = 0

3.times do |n|
  a = [A[n], A[n + 3]] 
  b = [B[n], B[n + 3]] 

  if a[1] > b[0] and a[0] < b[1]
    count += 1 
  end
end

if count == 3
  puts 'Yes'
else
  puts 'No'
end
