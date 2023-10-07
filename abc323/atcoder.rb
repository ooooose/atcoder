# N = gets.chomp.to_i
# N, M = gets.chomp.split(' ').map(&:to_i)


# S = gets.chomp.split('')
# count = S.length / 2
# ans = []
# count.times do |c|
#   if S[c * 2 + 1] == "1"
#     ans << "no"
#   end
# end

# if ans.empty?
#   puts "Yes"
# else
#   puts "No"
# end

# N = gets.to_i
# results = []

# N.times do
#   results << gets.chomp.split('')
# end
# result_hash = []
# results.each do |r|
#   result_hash << r.count('o') 
# end
# ranking = []

# (0..N).to_a.reverse.each do |n|
#   list = result_hash.each_index.select { |s| result_hash[s] == n }
#   list.each do |l|
#     ranking << l + 1
#   end
# end
# puts ranking.join(' ')

# N, M = gets.chomp.split(' ').map(&:to_i)
# scores = gets.chomp.split(' ').map(&:to_i)
# answers = []
# N.times do 
#   answers << gets.chomp.split('')
# end
# total_scores = []
# answers.each_with_index do |a, i|
#   total_score = i + 1
#   corrects_index = a.each_index.select { |s| a[s] == "o" }
#   corrects_index.each do |i|
#     total_score += scores[i]
#   end
#   total_scores << total_score 
# end
# others_max_scores = []
# N.times do |n|
#   filtered_list = total_scores.reject { |item| item == total_scores[n] }
#   others_max_scores << filtered_list.max
# end
# non_correct_answers = []
# answers.each do |a|
#   list = []
#   uncorrects_index = a.each_index.select { |s| a[s] == "x" }
#   uncorrects_index.each do |u|
#     list << scores[u]
#   end
#   non_correct_answers << list
# end
# add_count_list = []
# total_scores.each_with_index do |t, i|
#   add_count = []
#   diff = others_max_scores[i] - t
#   if diff < 0
#     add_count << 0
#   end
#   non_correct_answers[i].length.times do |n|
#     point =  n + 1
#     target = non_correct_answers[i].sort.reverse.slice(0, point).sum
#     if target >= diff
#       add_count << point
#       break
#     end
#   end
#   add_count_list << add_count.min
# end

# puts add_count_list


N = gets.to_i
slimes = []
N.times do
  slimes << gets.chomp.split(' ').map(&:to_i)
end
slime_list = []
slimes.each do |s|
  s[1].times do
    slime_list << s[0]
  end
end

while slime_list != slime_list.uniq
  dup_list = slime_list.select{|v| slime_list.count{v} > 1 }.uniq
  if dup_list.any?
    dup_list.each do |d|
      slime_list << d * 2
      slime_list.delete(d)
      slime_list.delete(d)
    end
  end
end
puts slime_list.count