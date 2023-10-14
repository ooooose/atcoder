# N = gets.to_i
# N_list = gets.chomp.split(' ').map(&:to_i).uniq
# if N_list.size == 1 
#   puts "Yes"
# else
#   puts "No"
# end

# N = gets.to_i

# while N % 2 == 0
#   N = N / 2
# end
# while N % 3 == 0
#   N = N / 3
# end
# if N == 1
#   puts "Yes"
# else
#   puts "No"
# end

# N, T = gets.chomp.split(' ')
# S_list = []

# N.to_i.times do
#   S_list << gets.chomp
# end

# t_list = T.split('')
# ans = []
# S_list.each_with_index do |s, i|
#   if s == T
#     ans << i + 1
#   end
#   s_list = s.split('')
#   if s_list.length > t_list.length
#     s_list.length.times do |d|
#       list = s_list.slice(0, d) + s_list.slice(d + 1, s_list.length - d - 1)
#       if list == t_list
#         ans << i + 1
#         break
#       end
#     end
#   elsif t_list.size > s_list.size
#     t_list.length.times do |d|
#       list = t_list.slice(0, d) + t_list.slice(d + 1, t_list.length - d - 1)
#       if list == s_list
#         ans << i + 1
#         break
#       end
#     end
#   else
#     count = 0
#     s_list.each_with_index do |d, index|
#       if d != t_list[index]
#         s = s_list.slice(0, index) + s_list.slice(index + 1, s_list.length - index - 1)
#         t = t_list.slice(0, index) + t_list.slice(index + 1, t_list.length - index - 1)
#         if s == t
#           ans << i + 1
#         end
#       end
#     end
#   end
# end
# puts ans.size
# puts ans.join(' ')

# N, T = gets.chomp.split(' ')
# S_list = []

# N.to_i.times do
#   S_list << gets.chomp
# end

# t_list = T.split('')
# ans = []

# t_length = t_list.length

# S_list.each_with_index do |s, i|
#   if s == T
#     ans << i + 1
#     next
#   end

#   s_list = s.split('')
#   s_length = s_list.length

#   if s_length > t_length
#     s_length.times do |d|
#       list = s_list[0, d] + s_list[d + 1, s_length - d - 1]
#       if list == t_list
#         ans << i + 1
#         break
#       end
#     end
#   elsif t_length > s_length
#     t_length.times do |d|
#       list = t_list[0, d] + t_list[d + 1, t_length - d - 1]
#       if list == s_list
#         ans << i + 1
#         break
#       end
#     end
#   else
#     if s_list != t_list
#       s_length.times do |d|
#         if s_list[d] != t_list[d]
#           s = s_list[0, d] + s_list[d + 1, s_length - d - 1]
#           t = t_list[0, d] + t_list[d + 1, t_length - d - 1]
#           if s == t
#             ans << i + 1
#             break
#           end
#         end
#       end
#     end
#   end
# end

# puts ans.size
# puts ans.join(' ')



# N, T = gets.chomp.split(' ')
# S_list = []

# N.to_i.times do
#   S_list << gets.chomp
# end

# t_list = T.split('')
# ans = []

# t_length = t_list.length

# S_list.each_with_index do |s, i|
#   if s == T
#     ans << i + 1
#     next
#   end

#   s_list = s.split('')
#   s_length = s_list.length

#   if s_length > t_length
#     s_length.times do |d|
#       list = s_list[0, d] + s_list[d + 1, s_length - d - 1]
#       if list == t_list
#         ans << i + 1
#         break
#       end
#     end
#   elsif t_length > s_length
#     t_length.times do |d|
#       list = t_list[0, d] + t_list[d + 1, t_length - d - 1]
#       if list == s_list
#         ans << i + 1
#         break
#       end
#     end
#   else
#     mismatch_count = 0
#     s_length.times do |d|
#       if s_list[d] != t_list[d]
#         mismatch_count += 1
#         s = s_list[0, d] + s_list[d + 1, s_length - d - 1]
#         t = t_list[0, d] + t_list[d + 1, t_length - d - 1]
#         if s == t
#           ans << i + 1
#           break
#         end
#       end
#       break if mismatch_count > 1
#     end
#   end
# end

# puts ans.size
# puts ans.join(' ')

N, T = gets.chomp.split(' ')
S_list = []

N.to_i.times do
  S_list << gets.chomp
end

t_list = T.split('')
ans = []

t_length = t_list.length

S_list.each_with_index do |s, i|
  if s == T
    ans << i + 1
    next
  end

  s_length = s.length
  mismatch_count = 0

  if s_length != t_length
    if s_length > t_length
      s_length.times do |d|
        list = s[0, d] + s[d + 1, s_length - d - 1]
        if list == t_list
          ans << i + 1
          break
        end
      end
    elsif t_length > s_length
      t_length.times do |d|
        list = t_list[0, d] + t_list[d + 1, t_length - d - 1]
        if list == s
          ans << i + 1
          break
        end
      end
    end
  end

  s_length.times do |d|
    if s[d] != t_list[d]
      mismatch_count += 1
    end
    if mismatch_count > 1
      break
    end
  end

  if mismatch_count == 1
    ans << i + 1
  end
end

puts ans.size
puts ans.join(' ')
