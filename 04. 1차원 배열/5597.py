arr = [i for i in range(1, 31)]

for i in range(28):
    n = int(input())
    arr.remove(n)
    
print(*arr, sep='\n')