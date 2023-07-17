"""
ABC281
B - Sandwich Number: 結果AC
"""
import string
import re
target = list(input())
alfa = list(string.ascii_uppercase)
if target[0] in alfa and target[-1] in alfa:
    if re.search('[A-Z]', ''.join(target[1:-1])):
        print('No')
    else:
        if 999999 >= int(''.join(target[1:-1])) >= 100000:
            print('Yes')
        else:
            print('No')
else:
  print("No")
