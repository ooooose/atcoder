n = int(input())
a = []
b = []
for i in range(n):
  a.append(list(input()))
for i in range(n):
  b.append(list(input()))

for i in range(n):
  for j in range(n):
    if a[i][j] != b[i][j]:
      print(' '.join([str(i + 1), str(j + 1)]))