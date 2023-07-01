"""
ABC307
B - racecar: 結果AC
"""
N = int(input())
char_list = []
for i in range(N):
    char_list.append(input())
ans = []
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        target = char_list[i] + char_list[j]
        if target[::-1] == target:
            ans.append(target)
            break
if ans:
    print('Yes')
else:
    print('No')