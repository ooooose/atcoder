"""
ABC293
B - Call the ID Number: 結果AC(2回TLE)
"""
N = int(input())
A = list(map(int, input().split(' ')))
c = [0] * N
for a in range(N):
    if c[a] == 0:
        c[A[a] - 1] = 1
answer = N - sum(c)
print(answer)
for i in range(N):
    if c[i] == 0:
        print(i+1, end=' ')