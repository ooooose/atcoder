#!/usr/bin/env ruby
S = gets.chomp.split("")

ans = 0

S.each_with_index do |s, idx|
  next unless s == "C"
  left = idx + 1
  right = S.size - idx
  ans += [left, right].min
end


puts ans
