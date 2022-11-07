a = int(input())
b = input()
sum = 0

print(a*int(b[2]))
sum += a*int(b[2])
print(a*int(b[1]))
sum += a*int(b[1])*10
print(a*int(b[0]))
sum += a*int(b[0])*100
print(sum)