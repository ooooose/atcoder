#!/usr/bin/env ruby
H = gets.chomp.to_i

plant = 1
date = 1

while H >= plant do
  plant += 2 ** date
  date += 1
end

puts date
