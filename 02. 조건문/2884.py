h, m = input().split()
h = int(h)
m = int(m)

min = h*60+m
almin = min-45

if almin//60 < 0:
    print(23, almin%60)
else:
    print(almin//60, almin%60)