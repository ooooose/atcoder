"""
ABC294
A-Filter: 結果AC
"""
N = int(input())
A = list(map(int, input().split(' ')))
answer = []
for a in A:
    if a % 2 == 0:
        answer.append(a)
print(' '.join(map(str, answer)))