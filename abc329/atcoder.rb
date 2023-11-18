# N = gets.chomp.split("").join(" ")
# puts N 

# N = gets.chomp.to_i
# A = gets.chomp.split(" ").map(&:to_i).uniq.sort!.reverse!
# puts A[1]

# N = gets.chomp.to_i
# S = gets.chomp
# target = 0
# S.split("").uniq.each do |char|
#   N.times do |n|
#     if S.include?(char * (n + 1))
#       target += 1
#     end
#   end
# end

# puts target

# def binary_search(string, target)

#   head = 0
#   tail = string.split("").count - 1

#   while head <= tail

#     center = (head + tail) / 2

#     if !string.include?(target * center)
#       head = center + 1
#     elsif !string.include?(target * center)

#     else
#       tail = center - 1
#     end

#   end

# end

# N = gets.chomp.to_i
# S = gets.chomp
# target = 0
# S.split("").uniq.each do |char|
#   n = binary_search(S, char)
#   target += n
# end

# puts target

def count_substrings_with_one_char_only(s)
  count = 0
  s.each_char.with_index do |char, index|
    count += 1 # 単一文字の部分文字列をカウント
    ((index + 1)...s.length).each do |i|
      break if s[i] != char # 異なる文字が見つかったらループを抜ける
      count += 1
    end
  end
  count
end

N = gets.chomp.to_i
S = gets.chomp
puts count_substrings_with_one_char_only(S)