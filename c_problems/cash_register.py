"""
ABC283
C - Cash Register: 結果AC
"""
S = input()

ans = 0
while len(S) > 0:
    back = S[-1]
    S = S[:-1]
    if back == '0' and len(S) > 0 and S[-1] == '0':
        S = S[:-1]
    ans += 1
print(ans)