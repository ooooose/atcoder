S = input()
N = len(S)

def mC2(n):
    return n * (n - 1) // 2

ans = mC2(N)

C = [0] * 26
for s in S:
    idx = ord(s) - ord("a")
    C[idx] += 1

for c in C:
    ans -= mC2(c)

if any(c >= 2 for c in C):
    ans += 1

print(ans)
