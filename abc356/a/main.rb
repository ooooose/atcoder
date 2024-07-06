#!/usr/bin/env ruby
N, L, R = gets.chomp.split(" ").map(&:to_i)

default = (1..N).to_a
insert = default.slice(L - 1, R - L + 1).reverse

insert.each_with_index do |d, i|
  default[L + i -1] = insert[i]
end

puts default.join(' ')
