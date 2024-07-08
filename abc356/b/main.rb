#!/usr/bin/env ruby
N, M = gets.chomp.split(" ").map(&:to_i)
A_list = gets.chomp.split(" ").map(&:to_i)

list = Array.new(M, 0)

N.times do
  input = gets.chomp.split(" ").map(&:to_i)
  list = [list, input].transpose.map{|ary| ary.inject(:+) }
end

count = 0

M.times do |m|
  if A_list[m] <= list[m]
    count += 1
  end
end

if count == M
  puts 'Yes'
else
  puts 'No'
end
