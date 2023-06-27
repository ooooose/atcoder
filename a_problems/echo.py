"""
ABC306
A-Echo: 結果AC
"""
N = int(input())
S = list(input())
new_strings = []
for s in S:
    new_strings.append(s * 2)
print(''.join(new_strings))