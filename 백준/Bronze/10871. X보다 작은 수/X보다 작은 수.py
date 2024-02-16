num, find = map(int,input().split())
in_data = list(input().split())
in_data = [int(x) for x in in_data]
find_data = list()
for i in range(num):
    if in_data[i] < find:
        find_data.append(in_data[i])
output = ' '.join(map(str, find_data))
print(output)