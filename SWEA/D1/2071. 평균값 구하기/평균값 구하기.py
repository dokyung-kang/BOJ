n = int(input())

for i in range(0, n):
    total = 0
    num = list(map(int, input().split()))
    for j in range(0, 10):
        total += num[j]
    avg = round(total / 10)
    print("#%d %d" % (i + 1, avg))
