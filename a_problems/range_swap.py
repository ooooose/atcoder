"""
ABC286
A - Range Swap: 結果AC
"""
N, P, Q, R, S = map(int, input().split())
A = list(map(int, input().split()))
p_q = A[P-1:Q]
r_s = A[R-1: S]
A[P-1:Q] = r_s
A[R-1:S] = p_q
print(' '.join(map(str, A)))