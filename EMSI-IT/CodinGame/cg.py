# Input
# Line 1: A postive integer N.
# Lines 2..N+1 Two integers separated by space, a coordinate pair.
# Output
# A single integer which is the area of the polygon.
a = 0
n = int(input())
for i in range(n):
    x, y = [int(j) for j in input().split(" ")]


# Initialize area
area = 0.0

# Calculate value of shoelace formula
j = n - 1
for i in range(0,n):
    area += (x[j] + x[i]) * (y[j] - y[i])
    j = i
    
print(int(area/2))