"""
ABC308
B - Default Price: 結果AC
"""
N, M = map(int, input().split())
C = list(input().split())
D = list(input().split())
P = list(map(int, input().split()))
price_dict = {}
last_dish = list(set(C) - set(D))
for i, d in enumerate(D):
    price_dict[d] = P[i + 1]
    for last in last_dish:
      price_dict[last] = P[0]
total_perice = 0
for c in C:
    total_perice += price_dict[c]
print(total_perice)