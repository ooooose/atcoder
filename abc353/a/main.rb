#!/usr/bin/env ruby
n = gets.chomp.to_i
h_list = gets.chomp.split.map(&:to_i)

flag = false

h_list.each_with_index do |h, index|
  next if index == 0

  if h_list[0] < h
    puts index + 1
    flag = true
    break
  end
end

if flag == false
  puts -1
end
