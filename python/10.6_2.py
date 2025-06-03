import math
n = int(input("Get n (n >= k): "))
k = int(input("Get k (k >= 1): "))

# result = math.factorial(n) / (math.factorial(n-k) * math.factorial(k))


licznik = 1
mianownik = 1
for i in range(0, k):
    licznik *= (n-i)
    mianownik *= (i+1)
    

print(licznik/mianownik)




