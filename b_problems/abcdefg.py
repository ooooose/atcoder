"""
ABC306
B - ABCDEFG: 結果AC
"""
num_list = {'A': 0, 'B': 3, 'C': 4, 'D': 8, 'E': 9, 'F': 14, 'G': 23}
target = sorted(input().split(' '))
print(num_list[target[1]] - num_list[target[0]])