
numbers = []

# open "numbers.txt" in read mode
with open("./data/numbers.txt", "r") as file:
    for line in file:
        numbers.append(int(line))

# open 'results.txt' in write mode
with open("./data/results.txt", "w") as file:
    # decrease every element by 100
    # and save in results.txt
    for elem in numbers:
        elem -= 100
        str_val = str(elem) + "\n"
        file.write(str_val)
        