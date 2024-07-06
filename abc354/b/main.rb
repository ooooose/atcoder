#!/usr/bin/env ruby
N = gets.chomp.to_i
members = []

total = 0

N.times do
  member, lot = gets.chomp.split(' ')
  members << member
  total += lot.to_i
end

mod = total % N

winner = members.sort[mod]
puts winner
