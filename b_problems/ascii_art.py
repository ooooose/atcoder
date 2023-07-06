"""
ABC294
B - ASCII Art: 結果AC
"""
import string
alfa = list(string.ascii_uppercase)
H, W = map(int, input().split())
ans = []
for i in range(H):
    target = list(map(int, input().split()))
    line = []
    for t in target:
        if t == 0:
            line.append('.')
        else:
            line.append(alfa[t - 1])
    ans.append(line)
for a in ans:
    print(''.join(a))