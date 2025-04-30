k = int(input("Get k value (k>0): "))

elem = None
prevElem = None
prevPrevElem = None

for i in range(1, k):
    if i == 1:
        elem = 1
    if i == 2: 
        preveElem = elem
        elem = 3
    if i > 2:
        prevPrevElem = preveElem
        preveElem = elem
        elem = prevElem + prevPrevElem 
        
print(elem)

