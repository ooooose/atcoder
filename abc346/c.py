N, K = list(map(int, input().split()))
A = list(map(int, input().split()))
remaining_nums = [i + 1 for i in range(K)]
for a in A:
  if a > K:
    continue
  if a in remaining_nums:
    remaining_nums.remove(a)
print(sum(remaining_nums))