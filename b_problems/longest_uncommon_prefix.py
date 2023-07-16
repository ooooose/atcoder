"""
ABC285
B - Longest Uncommon Prefix: 結果AC
"""
N = int(input())
S = input()
for i in range(1, N):
    for j in range(N - i):
        if S[j] == S[j + i]:
            j -= 1
            break
    print(j + 1)