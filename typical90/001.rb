# 結果: TLE

N,L = gets.chomp.split.map(&:to_i)
K = gets.to_i
A = gets.chomp.split.map(&:to_i)
A << L
left = 0
right = L
while left + 1 < right
  mid = (left+right)/2
  start = 0
  cnt = 0
  A.each do |a|
    if a - start >= mid
      start = a
      cnt += 1
    end
  end
  if cnt >= K + 1
    left = mid
  else
    right = mid
  end
end
puts left