"""
ABC303
B - Discord: 途中
"""
H, W = map(int, input().split(' '))
char_list = []
for i in range(H):
    char_list.append(list(input()))
s_list = []
n_list = []
u_list = []
k_list = []
e_list = []
for i, char in enumerate(char_list):
    for j, c in enumerate(char):
        if c == 's':
            s_list.append([i + 1, j + 1])
        elif c == 'n':
            n_list.append([i + 1, j + 1])
        elif c == 'u':
            u_list.append([i + 1, j + 1])
        elif c == 'k':
            k_list.append([i + 1, j + 1])
        elif c == 'e':
            e_list.append([i + 1, j + 1])
ans = 0
for s in s_list:
    challenge = [s]
    if [s[0] + 1 , s[1]] in n_list:
        challenge.append([s[0] + 1 , s[1]])
        if [s[0] + 2 , s[1]] in u_list:
            challenge.append([s[0] + 2 , s[1]])
            if [s[0] + 3 , s[1]] in k_list:
              challenge.append([s[0] + 3 , s[1]])
              if [s[0] + 4 , s[1]] in e_list:
                challenge.append([s[0] + 4 , s[1]])
    if [s[0] - 1 , s[1]] in n_list:
        challenge.append([s[0] - 1 , s[1]])
        if [s[0] - 2 , s[1]] in u_list:
            challenge.append([s[0] - 2 , s[1]])
            if [s[0] - 3 , s[1]] in k_list:
              challenge.append([s[0] - 3 , s[1]])
              if [s[0] - 4 , s[1]] in e_list:
                challenge.append([s[0] - 4 , s[1]])
    if [s[0], s[1] + 1] in n_list:
        challenge.append([s[0] , s[1] + 1])
        if [s[0], s[1] + 2] in u_list:
            challenge.append([s[0] , s[1] + 2])
            if [s[0], s[1] + 3] in k_list:
              challenge.append([s[0], s[1] + 3])
              if [s[0], s[1] + 4] in e_list:
                challenge.append([s[0], s[1] + 4])
    if [s[0], s[1] - 1] in n_list:
        challenge.append([s[0] , s[1] - 1])
        if [s[0], s[1] - 2] in u_list:
            challenge.append([s[0] , s[1] - 2])
            if [s[0], s[1] - 3] in k_list:
              challenge.append([s[0], s[1] - 3])
              if [s[0], s[1] - 4] in e_list:
                challenge.append([s[0], s[1] - 4])
    if [s[0] + 1, s[1] + 1] in n_list:
        challenge.append([s[0] + 1 , s[1] + 1])
        if [s[0] + 2, s[1] + 2] in u_list:
            challenge.append([s[0] + 2, s[1] + 2])
            if [s[0] + 3, s[1] + 3] in k_list:
              challenge.append([s[0] + 3, s[1] + 3])
              if [s[0] + 4, s[1] + 4] in e_list:
                challenge.append([s[0] + 4, s[1] + 4])
    if [s[0] - 1, s[1] - 1] in n_list:
        challenge.append([s[0] - 1 , s[1] - 1])
        if [s[0] - 2, s[1] - 2] in u_list:
            challenge.append([s[0] - 2, s[1] - 2])
            if [s[0] - 3, s[1] - 3] in k_list:
              challenge.append([s[0] - 3, s[1] - 3])
              if [s[0] - 4, s[1] - 4] in e_list:
                challenge.append([s[0] - 4, s[1] - 4])
    if [s[0] + 1, s[1] - 1] in n_list:
        challenge.append([s[0] + 1 , s[1] - 1])
        if [s[0] + 2, s[1] - 2] in u_list:
            challenge.append([s[0] + 2, s[1] - 2])
            if [s[0] + 3, s[1] - 3] in k_list:
              challenge.append([s[0] + 3, s[1] - 3])
              if [s[0] + 4, s[1] - 4] in e_list:
                challenge.append([s[0] + 4, s[1] - 4])
    if [s[0] - 1, s[1] + 1] in n_list:
        challenge.append([s[0] - 1 , s[1] + 1])
        if [s[0] - 2, s[1] + 2] in u_list:
            challenge.append([s[0] - 2, s[1] + 2])
            if [s[0] - 3, s[1] + 3] in k_list:
              challenge.append([s[0] - 3, s[1] + 3])
              if [s[0] - 4, s[1] + 4] in e_list:
                challenge.append([s[0] - 4, s[1] + 4])
    print(challenge)
    if len(challenge) == 5:
        ans = challenge
for a in ans:
   print(' '.join(map(str, a)))