k = int(input("Get k (k >= 1): "))
n = int(input("Get n (n >= k): "))
    
licznik = 1
mianownik = 1
for i in range(1, k+1):
    # i = 1,2,3,4,...,k
    mianownik *= i
     
    # (n-k)+i
    licznik *= (n-k)+i
    
print(licznik/mianownik)