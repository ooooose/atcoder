"""
ABC309
B - Rotate : 途中
"""
N = int(input())
A = [input() for _ in range(N)]
B = [[0] * N for _ in range(N)]
for i in range(N):
    for j in range(N):
        if i == 0:
            if j == 0:
                B[0][0] = A[1][0]
            else:
                B[0][j] = A[0][j-1]
        elif i == N-1:
            if j == N-1:
                B[N-1][N-1] = A[N-2][N-1]
            else:
                B[N-1][j] = A[N-1][j+1]
        else:
            if j == 0:
                B[i][0] = A[i+1][0]
            elif j == N-1:
                B[i][N-1] = A[i-1][N-1]
            else:
                B[i][j] = A[i][j]
    print(''.join(B[i]))