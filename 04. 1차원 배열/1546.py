n = int(input())
results = list(map(int, input().split(' ')))
MAX = max(results)
_sum = 0

for result in results:
    result = (result/MAX)*100
    _sum += result
    
print(_sum/len(results))