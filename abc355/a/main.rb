#!/usr/bin/env ruby
memories = gets.chomp.split(" ").map(&:to_i)
targets = (1..3).to_a

memories.each do |m|
  targets.delete(m)
end

if targets.size == 1
  puts targets[0]
else
  puts -1
end
