"""
ABC282
B - Let's Get a Perfect Score: 結果AC
"""
import itertools
N, M = map(int, input().split())
answers = []
num = itertools.combinations(list(range(N)), 2)
ans = 0
for i in range(N):
    answers.append(list(input()))
for n in num:
    count = 0
    for i in range(M):
        if answers[n[0]][i] == 'o' or answers[n[1]][i] == 'o':
            count += 1
    if count == M:
        ans += 1
print(ans)