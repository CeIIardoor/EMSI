# a is the starting number.
# b is the increment in between numbers.
# c is the number of numbers per line.
# d is the number of lines

# Input
# 15
# 2
# 5
# 3
# Output
# 15 17 19 21 23
# 25 27 29 31 33
# 35 37 39 41 43


a = int(input())
b = int(input())
c = int(input())
d = int(input())
i = 0

def print_nums(a, b, c, d):
    output = ""
    for j in range(c):
        for i in range(a, a+b*d, b):
            output += str(i) + " "
            a = i + 2
        output += "\n"
    return output
            
print(print_nums(a, b, c, d))
        
    
    
    