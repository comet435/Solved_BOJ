recept = int(input())
num = int(input())
total = 0
for i in range(num):
    obj_price, obj_num = map(int, input().split())
    total += obj_price*obj_num
    
if recept == total:
    print("Yes")
else:
    print("No")