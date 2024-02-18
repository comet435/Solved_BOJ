ref = [j for j in range(1,31)]
data = []
for _ in range(28):
    data.append(int(input()))

for i in data:
    ref.remove(i)

ref.sort()
print(ref[0])
print(ref[1])