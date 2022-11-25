n = int(input())
count = 0
numbers = list(map(int, input().split(' ')))
v = int(input())

for i in numbers:
    if i == v: count += 1

print(count)