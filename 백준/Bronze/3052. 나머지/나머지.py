a = set()
b = list()
for i in range(10):
    b.append(int(input()))

for j in b:
    a.add(j%42)

print(len(a))