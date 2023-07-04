"""
ABC301
B - Fill the Gaps: 結果AC
"""
N = int(input())
A = list(map(int, input().split(' ')))
new_A = []
for n in range(N - 1):
    new_A.append(A[n])
    if A[n] - A[n + 1] >= 2:
        for i in range(A[n] - A[n + 1] - 1):
            new_A.append(A[n] - (i + 1))
    if A[n + 1] - A[n] >= 2:
        for i in range(A[n + 1] - A[n] - 1):
            new_A.append(A[n] + (i + 1))
new_A.append(A[-1])
print(' '.join(map(str, new_A)))