n = int(input("Введіть кількість рядків: "))
m = int(input("Введіть кількість стовпців: "))
matrix = []

for i in range(n):
    row = list(map(int, input(f"Рядок {i+1}: ").split()))
    matrix.append(row)

zero_count = -1
best_index = -1
best_row_elements = []

for i in range(n):
    zero_count = 0
    for val in matrix[i]:
        if val == 0:
            zero_count += 1
            
    if zero_count > max_zero_count:
        max_zero_count = zero_count
        best_index = i
        best_elements = matrix[i]

print(f"Індекс рядка: {best_index}")
print(f"Елементи рядка: {best_elements}")