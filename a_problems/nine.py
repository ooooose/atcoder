"""
ABC309
A - Nine: 結果AC
"""
cube = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
A, B = map(int, input().split())
for i, c in enumerate(cube):
    if A in c:
        a_dimension = [c.index(A), i + 1]
    if B in c:
        b_dimension = [c.index(B), i + 1]
if a_dimension[1] == b_dimension[1] and abs(a_dimension[0] - b_dimension[0]) == 1:
    print("Yes")
else:
    print("No")