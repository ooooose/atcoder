n = int(input())
A = list(map(int, input().split()))


# サイクルソートの実装
ans = []
for i in range(n):
    while A[i] != i + 1:
        a = A[i]
        A[i], A[a - 1] = A[a - 1], A[i]
        if i + 1 < a:
            target = [i + 1, a]
        else:
            target = [a, i + 1]
        ans.append(target)

print(len(ans))
for a in ans:
    print(" ".join(map(str, a)))
