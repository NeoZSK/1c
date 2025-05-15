k = int(input("What level you're exping to?"))

elem = None


for i in range(1,k):
    if k == 1:
        elem = 1
        
    if k == 2:
        prevElem = 1
        elem = 3
        
    if k > 2:
        
        elem = elem + prevElem
        # Przekazanie kolejnego prevElem
        
    

print(elem)