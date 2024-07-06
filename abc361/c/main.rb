#!/usr/bin/env ruby
N, K = gets.chomp.split(' ').map(&:to_i)
list = gets.chomp.split(' ').map(&:to_i)

patterns = (0..N).to_a.combination(K).to_a

diff = []

patterns.each do |pattern|
  target = list.dup
  pattern.each do |p|
    target.delete_at(p)
  end
  diff << target.max - target.min
end


puts diff.min
