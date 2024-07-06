#!/usr/bin/env ruby
N, K, X = gets.chomp.split(' ').map(&:to_i)
list = gets.chomp.split(' ').map(&:to_i)

new_list = []
list.each_with_index do |l, i|
  if i == K
    new_list << X
  end
  new_list << l
end
if N == K
  new_list << X
end

puts new_list.join(' ')

