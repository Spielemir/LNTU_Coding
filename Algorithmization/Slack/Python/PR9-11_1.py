n = int(input("Введіть кількість рядків: "))
m = int(input("Введіть кількість стовпців: "))
matrix = []

for i in range(n):
    row = list(map(int, input(f"Рядок {i+1}: ").split()))
    matrix.append(row)

max_count = -1
best_index = -1
best_elements = []

for j in range(m):
    neg_count = 0
    col_elements = []
    
    for i in range(n):
        val = matrix[i][j]
        col_elements.append(val)
        if val < 0:
            neg_count += 1
            
    if neg_count > max_count:
        max_count = neg_count
        best_index = j
        best_elements = col_elements

print(f"Індекс стовпця: {best_index}")
print(f"Елементи стовпця: {best_elements}")