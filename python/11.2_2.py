n = int(input("Get n to get prime numbers between 2-n: "))

numbers = [True] * (n-1)

j = 2
while j * j <= n:
    if(numbers[j] == True):
        for i in range(j**2, n+1, j):
            numbers[i-2] = False
    j += 1
        
for idx, is_prime in enumerate(numbers):
    if(is_prime):
        print(idx+2, end=", ")