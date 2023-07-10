"""
ABC287
B - Postal Card: 結果AC
"""
N, M = map(int, input().split())
S = []
for i in range(N):
    S.append(list(input())[-3:])
T = []
for j in range(M):
    T.append(list(input()))
ans = 0
for s in S:
    if s in T:
        ans += 1
print(ans)