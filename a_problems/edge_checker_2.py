"""
ABC285
A - Edge Checker 2: 結果AC
"""
target = sorted(list(map(int, input().split())))
answer_list = [[1, 2], [1, 3], [2, 4], [2, 5], [4, 8], [4, 9], [5, 10], [5, 11], [3, 6], [3, 7], [6, 12], [6, 13], [7, 14], [7, 15]]
if target in answer_list:
    print("Yes")
else:
    print("No")