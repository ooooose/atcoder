#!/usr/bin/env ruby
H, W = gets.chomp.split(" ").map(&:to_i)

grid = []
dis = [[1, 0], [0, 1], [-1, 0], [0, -1]]
H.times do |h|
  h_grid = []
  W.times do |w|
    h_grid << [w + 1, h + 1]
  end
  grid << h_grid
end

ans = []
grid.each do |hg|
  line = []
  hg.each do |g|
    cnt = 0
    dis.each do |d|
      n_grid = [g[0] + d[0], g[1] + d[1]]
      next if (n_grid[0] <= 0 || n_grid[0] > W || n_grid[1] <= 0 || n_grid[1]> H)
      cnt += 1
    end
    line << cnt
  end
  ans << line
end

ans.each do |a|
  puts a.join(" ")
end
