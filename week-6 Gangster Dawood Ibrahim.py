T = int(input())
for t in range(T):
    a = list(map(int, input().split()))
    n = a[0]
    a.pop(0)
    a.sort()
    print(a[(n-1)//2])
