N = gets.chomp.to_i

a_list = gets.chomp.split(" ").map(&:to_i)

answer = "Yes"
(N - 1).times do |n|
  unless a_list[n] < a_list[n + 1]
    answer = "No"
    break

  end
end


puts answer
