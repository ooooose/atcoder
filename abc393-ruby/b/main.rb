s = gets.chomp
n = s.length
ans = 0

(0...n).each do |i|
  (i + 1...n).each do |j|
    (j + 1...n).each do |k|
      if (j - i == k - j) && (s[i] == 'A') && (s[j] == 'B') && (s[k] == 'C')
        ans += 1
      end
    end
  end
end

puts ans

