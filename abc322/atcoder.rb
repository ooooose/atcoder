# N = gets.chomp.to_i
# S = gets.chomp
# begin
#   puts S.index("ABC") + 1
# rescue
#   puts -1
# end


# N, M = gets.chomp.split(' ').map(&:to_i)
# S = gets.chomp
# T = gets.chomp

# T_first = T.slice(0, N)
# T_last = T.slice(-N, N)

# if S == T_first && S == T_last
#   puts 0
# elsif S == T_first
#   puts 1
# elsif S == T_last
#   puts 2
# else
#   puts 3
# end


# N, M = gets.chomp.split(' ').map(&:to_i)
# A_list = gets.chomp.split(' ').map(&:to_i)
# festivals = (1..N).to_a
# position = 0
# festivals.each do |f|
#   target = A_list[position]
#   if f > target
#     position += 1
#     target = A_list[position]
#   end
#   puts target - f
# end

# N, K, P = gets.chomp.split(' ').map(&:to_i)
# solutions = []
# N.times do
#   solutions << gets.chomp.split(' ').map(&:to_i)
# end
# cost = []
# N.times do |n|
#   combination_list = solutions.combination(n+1).to_a
#   combination_list.each do |l|
#     result =  Array.new(K + 1, 0)
#     l.each do |j|
#       j.length.times do |n|
#         result[n] += j[n]
#       end
#     end
#     if result.slice(-K, K).min >= P
#       cost << result[0]
#     end
#   end
# end
# if !cost.empty?
#   puts cost.min
# else
#   puts -1
# end

# N, K, P = gets.chomp.split(' ').map(&:to_i)
# solutions = []
# N.times do
#   solutions << gets.chomp.split(' ').map(&:to_i)
# end

# def calculate_cost(arr)
#   best_cost = -1
#   max_combinations = 2 ** arr.length

#   max_combinations.times do |i|
#     combination = []
#     n = i
#     index = 0
#     while n > 0
#       if n % 2 == 1
#         combination << arr[index]
#       end
#       n >>= 1
#       index += 1
#     end

#     if combination.length > 0
#       result = Array.new(K + 1, 0)
#       combination.each do |j|
#         j.length.times do |n|
#           result[n] += j[n]
#         end
#       end
#       if result.slice(-K, K).min >= P
#         best_cost = best_cost == -1 ? result[0] : [best_cost, result[0]].min
#       end
#     end
#   end

#   best_cost
# end

# best_cost = -1

# N.times do |n|
#   cost = calculate_cost(solutions)
#   if cost != -1
#     best_cost = best_cost == -1 ? cost : [best_cost, cost].min
#   end
# end

# puts best_cost


N, K, P = gets.chomp.split(' ').map(&:to_i)
solutions = []
N.times do
  solutions << gets.chomp.split(' ').map(&:to_i)
end

def calculate_cost(arr)
  best_cost = -1
  max_combinations = 2 ** arr.length

  max_combinations.times do |i|
    combination = []
    bits = i
    index = 0
    while bits > 0
      if bits & 1 == 1
        combination << arr[index]
      end
      bits >>= 1
      index += 1
    end

    if combination.length > 0
      result = Array.new(K + 1, 0)
      combination.each do |j|
        j.length.times do |n|
          result[n] += j[n]
        end
      end
      if result.slice(-K, K).min >= P
        best_cost = best_cost == -1 ? result[0] : [best_cost, result[0]].min
      end
    end
  end

  best_cost
end

best_cost = -1

N.times do |n|
  cost = calculate_cost(solutions)
  if cost != -1
    best_cost = best_cost == -1 ? cost : [best_cost, cost].min
  end
end

puts best_cost
