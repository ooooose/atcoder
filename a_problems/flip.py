"""
ABC289
A - flip: 結果AC
"""
S = list(input())
for i, s in enumerate(S):
    if s == '1':
        S[i] = '0'
    elif s == '0':
        S[i] = '1'
print(''.join(S))