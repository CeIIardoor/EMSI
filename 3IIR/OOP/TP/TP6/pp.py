# You program must output the smallest prime factor of N.
# If N equals 0 or 1 you program must output NONE
n = int(input())
def smallestDivisor(n):
    i = 3;
    if (n % 2 == 0): return 2;
    while(i * i <= n):
        if (n % i == 0): return i;
        i += 2;
    return n;
print("NONE" if (n < 2) else smallestDivisor(n))