"""
ABC310
B - Strictly Superior : 結果AC
"""
N, M = map(int, input().split())
superiors = []
for i in range(N):
    superiors.append(list(map(int, input().split())))
ans = ''
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        if superiors[i][0] >= superiors[j][0] and set(superiors[i][2:]) < set(superiors[j][2:]):
            ans = "Yes"
        elif superiors[i][0] > superiors[j][0] and set(superiors[i][2:]) <= set(superiors[j][2:]):
            ans = "Yes"
if ans == 'Yes':
    print("Yes")
else:
    print("No")
