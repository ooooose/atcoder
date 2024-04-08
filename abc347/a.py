K, N = list(map(int, input().split()))
num_list = list(map(int, input().split()))
answers = []
for i in num_list:
  if i % N == 0:
    answers.append(str(i // N))
print(' '.join(answers))