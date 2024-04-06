N = int(input())
kick_array = list('o' * N)
for i in range(int(N / 3)):
    point = (i + 1) * 3 - 1
    kick_array[point] = 'x'
print(''.join(kick_array))