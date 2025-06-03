n = int(input("Get n (n >= k): "))
k = int(input("Get k (k >= 1): "))


# import math
# res = math.factorial(n) / (math.factorial(n-k) * math.factorial(k))
# print(res)

    
licznik = 1
mianownik = 1
for i in range(1, k+1):
    # i = 1,2,3,4,...,k
    mianownik *= i
     
    # (n-k)+i
    licznik *= (n-k)+i
    
print(licznik/mianownik)
