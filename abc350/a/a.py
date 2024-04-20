s = input()
a = s[0:3]
b = int(s[3:6])
if (a == 'ABC' and (1 <= b <= 315 or 317 <= b <= 349)):
  print('Yes')
else:
  print('No')