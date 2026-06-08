lst1 = list(map(int, input("Введіть перший список чисел через пробіл: ").split()))
lst2 = list(map(int, input("Введіть другий список чисел через пробіл: ").split()))

merged_list = []

for i in range(len(lst1)):
    merged_list.append(lst1[i])
    merged_list.append(lst2[i])

print("Об'єднаний список:", merged_list)