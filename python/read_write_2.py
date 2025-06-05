
sum = 0
numbers = []

# file in read mode
with open("./data/numbers.txt", "r") as file:
    for line in file:
        numbers.append(line)
        
print(numbers)

# file in write mode
with open("./data/results.txt", "w") as file:
    for elem in numbers:
        newVal = int(elem) - 100
        file.write(str(newVal) + "\n")
