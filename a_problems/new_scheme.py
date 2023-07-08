"""
ABC308
A - New Scheme: 結果AC
"""
S = list(map(int, input().split()))
success_cnt = 0
for i, s in enumerate(S):
    if i != len(S)-1:
      if s >= 100 and s <= 675 and s % 25 == 0 and S[i] <= S[i + 1]:
        success_cnt += 1
    else:
      if s >= 100 and s <= 675 and s % 25 == 0:
        success_cnt += 1
if success_cnt == len(S):
    print("Yes")
else:
    print("No")