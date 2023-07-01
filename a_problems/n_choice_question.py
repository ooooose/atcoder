"""
ABC300
A-N-choice question: 結果AC
"""
N, A, B = map(int, list(input().split(' ')))
C_list = list(map(int, list(input().split(' '))))
answer = C_list.index(A+B) + 1
print(answer)