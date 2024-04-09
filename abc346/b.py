W, B = list(map(int, input().split()))
string = 'wbwbwwbwbwbw' * (((W + B) // 12) + 2)
answer = []

for i in range(len(string) - (W + B) + 1):
  target = string[i:(W + B) + i]
  if target.count('w') == W:
    answer.append('Yes')
if 'Yes' in answer:
  print('Yes')
else:
  print('No')