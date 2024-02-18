a, b = map(int, input().split())  # a: 바구니, b: 번 넣을 공
basket = []
for j in range(1,a+1):
    basket.append(j)


    
for i in range(b):
    c,d =  map(int, input().split())
    temp = basket[d-1]
    basket[d-1] = basket[c-1]
    basket[c-1] = temp


for j in basket:
    print(j, end=" ")
