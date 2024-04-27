n = int(input())
a = list(map(int, input().split()))
list = []
for i in range(n):
  list.append(a[i])
  if len(list) >= 2:
    for j in range(len(list) - 1):
      if list[-1] != list[-2]:
        break
      list[-2] += 1
      del list[-1]
print(len(list))
