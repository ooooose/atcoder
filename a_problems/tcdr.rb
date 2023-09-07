"""
ABC315
A - tcdr: 結果AC
"""
black_list = ['a', 'i', 'u', 'e', 'o']
S = gets.chomp.split('')
ans_char = []
for i in S do
  if !black_list.include?(i)
    ans_char << i
  end
end
puts ans_char.join()