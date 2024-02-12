h,m = map(int,input().split())
min = int(input())

h = int(h) # 입력받은 시간
m = int(m) # 입력반은 분

m1 = m + min #현제 분과 더한 분

hn = m1//60 #시간에 더해야할 분

h += hn

m = m1 - hn*60

if h > 23:
    h -= 24
    h = abs(h)
    



print(h,m)