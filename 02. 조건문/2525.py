h, m = map(int, input().split(' '))
pm = int(input())
ph = int((m+pm)/60)

if m+pm < 60:
    print(h, m+pm)
else:
    rh = h+ph
    if rh >= 24:
        print(rh-24, int((m+pm)%(60*ph)))
    else:
        print(h+ph, int((m+pm)%(60*ph)))