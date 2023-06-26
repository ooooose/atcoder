"""
ABC307
A-Weekly: 結果AC
"""
N = int(input())
A_list = list(map(int,list(input().split(' '))))
sum_list = []
for i in range(N):
    start = i * 7
    end = (i + 1) * 7
    sum_list.append(sum(A_list[start:end]))
print(" ".join(map(str, sum_list)))