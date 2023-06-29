"""
ABC301
A-Overall Winner: 結果AC
"""
N = int(input())
S = list(input())
win_or_lose = {}
win_or_lose['T'] = 0
win_or_lose['A'] = 0
split_num = N // 2 if N % 2 == 0 else (N // 2 + 1)
for s in S:
    if s == 'T':
        win_or_lose['T'] += 1
    elif s == 'A':
        win_or_lose['A'] += 1
    if win_or_lose['T'] == split_num:
        print("T")
        break
    elif win_or_lose['A'] == split_num:
        print('A')
        break