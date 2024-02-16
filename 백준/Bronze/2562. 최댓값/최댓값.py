input_data = list()
for i in range(9):
    input_data.append(int(input().strip()))

print(max(input_data))
print(input_data.index((max(input_data)))+1)