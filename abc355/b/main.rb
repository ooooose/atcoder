#!/usr/bin/env ruby
N, M = gets.chomp.split(' ').map(&:to_i)
N_list = gets.chomp.split(' ').map(&:to_i)
M_list = gets.chomp.split(' ').map(&:to_i)

N_list.sort!
flag = false

N_list.each_with_index do |n, i|
  break if i == N - 1

  if N_list[i + 1] - n == 1
    flag = true
  end 
end

if flag == true
  puts 'Yes'
else
  puts 'No'
end
