"""
ABC304
B - Subscribers: 結果AC
"""
import math
N = int(input())
if 10 ** 3 - 1 >= N:
    print(N)
elif 10 ** 4 - 1 >= N and N >= 10 ** 3:
    print(math.floor(N / 10) * 10)
elif 10 ** 5 - 1 >= N and N >= 10 ** 4:
    print(math.floor(N / 100) * 100)
elif 10 ** 6 - 1 >= N and N >= 10 ** 5:
    print(math.floor(N / 1000) * 1000)
elif 10 ** 7 - 1 >= N and N >= 10 ** 6:
    print(math.floor(N / 10000) * 10000)
elif 10 ** 8 - 1 >= N and N >= 10 ** 7:
    print(math.floor(N / 100000) * 100000)
elif 10 ** 9 - 1 >= N and N >= 10 ** 8:
    print(math.floor(N / 1000000) * 1000000)