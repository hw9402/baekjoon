arr = list()
for i in range(9):
    temp = int(input())
    arr.append(temp)
print(max(arr))
print(arr.index(max(arr))+1)