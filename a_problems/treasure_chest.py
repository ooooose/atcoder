"""
ABC299
A - Treasure Chest: 結果AC
"""
N = int(input())
S = list(input())
first = S.index('|')
second = S.index('|', first + 1)
target = S.index('*')
if first < target and target < second:
    print('in')
else:
    print('out')