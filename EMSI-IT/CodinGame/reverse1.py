
n = int(input())

def print_grid(n):
    i = 0
    j = 0
    while i < n:
        print("-" * (2 * n + 3))
        while(j < n):
            print("|" + "." * (n) + "|", end="")
            print("." * (n) + "|")
            j += 1
        j = 0
        print("|"+"-" * (n), end="")
        print("+", end="")
        print("-" * (n)+ "|")
        while(j < n):
            print("|" + "." * (n) + "|", end="")
            print("." * (n) + "|")
            j += 1
        print("-" * (2 * n + 3))
        i += 13
print_grid(n)