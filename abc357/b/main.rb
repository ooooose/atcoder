#!/usr/bin/env ruby
S = gets.chomp
S_chars = S.split('')

upper_count = 0

S_chars.each do |s|
  if s == s.upcase
    upper_count += 1
  end
end

if upper_count > S_chars.size / 2
  puts S.upcase
else
  puts S.downcase
end
