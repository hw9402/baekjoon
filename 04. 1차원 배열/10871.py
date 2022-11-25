n, x = input().split()
n = int(n)
x = int(x)

l = input().split()

for i in range(len(l)):
    l[i] = int(l[i])
    
    if l[i] < x:
        print(l[i], end = ' ')

print()