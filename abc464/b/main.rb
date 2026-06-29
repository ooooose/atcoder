#!/usr/bin/env ruby
H, W = gets.chomp.split(" ").map(&:to_i)

grid = []
upper = 0
lower = H - 1
left = 0
right = W - 1
H.times do |h|
  grid << gets.chomp.split("") 
end

grid.each_with_index do |g, idx|
  if g.include?("#")
    upper = idx
    break
  end
end

(upper...H).to_a.reverse.each do |h|
  if grid[h].include?("#")
    lower = h
    break
  end
end

W.times do |w|
  flag = true
  H.times do |h|
    if (grid[h][w] == "#")
      flag = false
      break
    end
  end
  if !flag
    left = w
    break
  end
end

(left...W).to_a.reverse.each do |w|
  flag = true
  H.times do |h|
    if (grid[h][w] == "#")
      flag = false
      break
    end
  end
  if !flag
    right = w
    break
  end
end

(upper..lower).each do |h|
  ans = []
  (left..right).each do |w|
    ans << grid[h][w]
  end
  puts ans.join()
end
