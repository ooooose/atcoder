#!/usr/bin/env ruby
S = gets.chomp.split("")

ans = 0
mod = 998244353

prev = ""
num = 0

S.each do |s|
  if prev == s
    ans += num * (num + 1) / 2
    prev = s
    num = 1 
    next
  end
  num += 1
  prev = s
end

ans += num * (num + 1) / 2


puts ans % mod
