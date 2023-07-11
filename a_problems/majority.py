"""
ABC287
A - Majority: 結果AC
"""
import math
N = int(input())
accept_number = 0
for i in range(N):
    if input() == 'For':
        accept_number += 1
if accept_number >= math.ceil(N/2):
    print("Yes")
else:
    print("No")