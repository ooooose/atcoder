n, q = list(map(int, input().split()))
T = list(map(int, input().split()))
teeth = [i + 1 for i in range(n)]
for t in T:
  if t in teeth:
    teeth.remove(t)
  else:
    teeth.append(t)
print(len(teeth))