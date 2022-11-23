num = int(input())
count = 0
n = num

while True:
    temp = int(str(n%10) + str(((n%10) + (n//10))%10))
    n = temp
    count += 1
    if num == temp:
        print(count)
        break