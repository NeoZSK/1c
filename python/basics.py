# KOMENTARZ

#output
print("hi")
#input
b=int(input("enter a number:"))
print(b)
#zmienne i operacje
a=5
c="cos"
#warunki
if b > 5:
    print("b>5")
elif b>5:
    print("b<5")
else:
    print("b=5")
#pętle
y=int(input("enter a number:"))
while y > 0:
    print(y)
    y-=1
print("- - - - - -")
for i in range(0,10):
    print(i)
print("- - - - - -")
for i in range(0,10,2):
    print(i)
print("- - - - - -")
for i in range(10):
    print(i)
print("- - - - - -")
l=[1,2,3]
for elem in l:
    print(elem)
print("- - - - - -")

bool

b1= True
b2= False

if b1:
    print("prawda")

if b2:
    print("NAIN FALSZEN")

x=5>4
print(x)

# and (&&)
if True and True:
    print("true")

if True and False:
    print("false")
# or (||)
if True or False:
    print("true")
if True or True:
    print("true")

#not

if not True:
    print("false")

if not False:
    print("true")