
from itertools import product


k, m = map(int, input().split())


lists = []
for _ in range(k):
    row = list(map(int, input().split()))
    lists.append(row[1:])


results = []
for combination in product(*lists):
    
    current_sum = sum(x**2 for x in combination) % m
    results.append(current_sum)


print(max(results))
