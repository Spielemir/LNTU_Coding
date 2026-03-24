print("Числа від 1 до 50, які не діляться на 3 та 7:")

for i in range(1, 51):
    if i % 3 == 0 or i % 7 == 0:
        continue
    print(i, end=" ")