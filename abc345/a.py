S = list(input())
middle = S[1: -1]
if S[0] == '<' and S[-1] == '>' and len(set(middle)) == 1 and middle[0] == '=':
  print('Yes')
else:
  print('No')