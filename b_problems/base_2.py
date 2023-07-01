"""
ABC306
B - Base 2: 結果AC
"""
A_list = list(map(int, input().split(' ')))
sum = 0
for i, a in enumerate(A_list):
    sum += a * 2 ** i
print(sum)