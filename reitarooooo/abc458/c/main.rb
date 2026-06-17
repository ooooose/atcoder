#!/usr/bin/env ruby
S = gets.chomp

idx = 0
ans = 0

while idx < S.size do
  (idx...S.size).each do |s|
    target = S[idx..s]
    odd = target.size % 2 != 0
    c_standard = odd && target[target.size / 2] == "C"
    ans += 1 if c_standard
  end
  idx += 1
end

puts ans
