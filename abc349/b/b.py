s = list(input())

my_dict = {}
for i in s:
    if i in my_dict.keys():
        my_dict[i] += 1
    else:
        my_dict[i] = 1

num_dict = list(my_dict.values())
for i in range(max(num_dict)):
    target = num_dict.count(i + 1)
    if not (target == 0 or target == 2):
        print('No')
        break
else:
    print('Yes')
