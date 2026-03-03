from itertools import product

# Read input lists
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Compute Cartesian product
result = product(sorted(A), sorted(B))

# Print space-separated tuples
print(' '.join(str(tup) for tup in result))
