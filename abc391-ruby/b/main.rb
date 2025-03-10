s, t = gets.chomp.split(' ').map(&:to_i)

s_list = []
t_list = []

s.times do
  s_list << gets.chomp.split('')
end

t.times do
  t_list << gets.chomp.split('')
end

s_list.each_with_index do |s, i|
  s.length.times do |j|
    answer_check = true
    t_list.each_with_index do |t, k|
      if (i + k < s_list.length) && s_list[i + k][j, t.size] != t
        answer_check = false
      end
    end
    p answer_check
    if answer_check
      puts [i + 1, j + 1].join(' ')
      return
    end
  end
end
