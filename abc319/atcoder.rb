S_list = { "tourist": 3858, 
          "ksun48": 3679, 
          "Benq": 3658, 
          "Um_nik": 3648, 
          "apiad": 3638, 
          "Stonefeang": 3630,
          "ecnerwala": 3613,
          "mnbvmar": 3555,
          "newbiedmy": 3516,
          "semiexp": 3481,
        }
S = gets.chomp
puts S_list[S.to_sym]

N = gets.to_i
def divisors(n)
  (1..n).select { |i| n % i == 0 && i < 10 }
end
answers = []
j_candidates = divisors(N)
for i in (0..N).to_a do
  j_list = []
  for j in j_candidates do
    if i % (N / j) == 0
      j_list << j
    end
  end
  if j_list.empty?
    answers << '-'
  else
    answers << j_list.min
  end
end
puts answers.join('')


dimention = []
all_pattern = []
3.times do
  dimention << gets.chomp.split(' ').map(&:to_i)
end
dimention.each do |d|
  all_pattern << d
end
dimention.length.times do
