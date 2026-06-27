N = gets.chomp.to_i
a = [0, 0]
b = [0, 0, 0]

gets.split.map { |i| a << i.to_i }
gets.split.map { |i| b << i.to_i }

dp = [0, 0, a[2]]

(3..N).each do |n|
  dp[n] = [dp[n - 1] + a[n], dp[n - 2] + b[n]].min
end

puts dp[N]
