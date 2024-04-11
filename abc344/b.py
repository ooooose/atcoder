A = []
for i in range(100):
  a = int(input())
  A.append(a)
  if a == 0:
    break

for a in range(len(A)):
  print(A[len(A) - a - 1])