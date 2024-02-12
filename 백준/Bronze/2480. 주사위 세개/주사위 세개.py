a = list(map(int, input().split()))
a.sort()

if a[0] == a[1] == a[2]:
    print(10000+a[1]*1000)
elif a[0] == a[1] or a[0] == a[2] or a[1] == a[2]:
    max_a = 0
    for i in a:
        max_a = max(a)
        a_cnt  = a.count(max_a)
        if a_cnt == 1:
            a.remove(max_a)
        elif a_cnt == 2:
            pass
    print(max_a*100 +1000)
else:
    max_a = max(a)
    print(max_a*100)
 