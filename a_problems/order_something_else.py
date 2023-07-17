"""
ABC310
A - Order Something Else: 結果AC
"""
N, P, Q = map(int, input().split())
dish = list(map(int, input().split()))
if P >= Q + min(dish):
    print(Q + min(dish))
else:
    print(P)