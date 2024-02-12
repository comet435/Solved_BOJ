h ,m= input().split()

h = int(h)
m = int(m)
mn = m - 45

if mn < 0:
    h -= 1
    mn = 60 + mn
    if h < 0:
        h = 23
print(h,mn)


