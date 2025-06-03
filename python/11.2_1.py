n = int(input("Get n to get prime numbers between 2-n: "))

numbers = [True] * (n-1)

j = 2
while(j*j <= n):
    print(f"Wielokrotnosci {j}: ")
    for i in range(j*j, n+1, j):
        print(i, end=", ")
        idx = i-2
        numbers[idx] = False
    j += 1
    print("\n")
    
print(numbers)

print("\nPrime numbers: ")
for i in range(len(numbers)):
    if(numbers[i]):
        print(i+2, end=", ")
