# # TLE
# N = int(input())
# beans = []
# for i in range(N):
#   beans.append(list(map(int, input().split())))
# beans = sorted(beans, key= lambda x: x[1])

# def search(c, lst):
#     target_indices = [index for index, item in enumerate(lst) if item[1] == c]
#     target_values = [lst[index][0] for index in target_indices]
#     for index in sorted(target_indices, reverse=True):
#         del lst[index]
#     return target_values

# answers = []
# while any(beans):
#   c = beans[0][1]
#   target = search(c, beans)
#   answers.append(min(target))
# print(max(answers))

# N = int(input())
# beans = []
# for i in range(N):
#   beans.append(list(map(int, input().split())))
# beans = sorted(beans, reverse=True)
# minimum_taste = {}
# for i in beans:
#   if i[1] in beans:
#     minimum_taste[i[1]] = min(minimum_taste[i[1]], i[0])
#   else:
#     minimum_taste[i[1]] = i[0]
# print(max(minimum_taste.values()))

# N = int(input())
# Beans = [list(map(int,input().split())) for n in range(N)]

# dict = {}
# for A, C in Beans:
#     if C in dict.keys():
#         if dict[C] > A:
#             dict[C] = A
#     else:
#         dict[C] = A
# print (max(dict.values()))


N = int(input())
beans = [list(map(int, input().split())) for n in range(N)]

dict = {}
for a, c in beans:
  if c in dict.keys():
    if dict[c] > a:
      dict[c] = a
  else:
    dict[c] = a
print(max(dict.values()))