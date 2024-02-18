a, b = map(int, input().split())  # a: 바구니, b: 번 넣을 공
basket = [0] * a

for i in range(b):
    c, d, e = map(int, input().split())
    for j in range(c-1, d):
        basket[j] = e

for j in basket:
    print(j, end=" ")