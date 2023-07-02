"""
ABC303
B - Discord: 結果AC
"""
import itertools
N, M = map(int, input().split(' '))
lis = list(range(1, N+1))
pair = []
for p in itertools.combinations(lis, 2):
    pair.append(list(p))
for i in range(M):
    l = list(map(int, input().split(' ')))
    for j in range(N - 1):
        target = sorted([l[j], l[j + 1]])
        if target in pair:
            target_num = pair.index(target)
            pair.pop(target_num)
print(len(pair))