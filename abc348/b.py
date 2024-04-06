import math

N = int(input())
X_Y_list = []

for i in range(N):
  X_Y_list.append(list(map(int, input().split())))

def output(list_1, list_2):
  return math.sqrt((list_1[0] - list_2[0]) ** 2 +  (list_1[1] - list_2[1]) ** 2)

for i in X_Y_list:
  output_list = []
  for j in X_Y_list:
    output_list.append(output(i, j))
  print(output_list.index(max(output_list)) + 1)