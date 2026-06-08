lst = list(map(int, input("Введіть числа через пробіл: ").split()))

inv_count = 0
inv_pairs = []

for i in range(len(lst)):
    for j in range(i + 1, len(lst)):
        if lst[i] > lst[j]:
            inv_count += 1
            inv_pairs.append((lst[i], lst[j]))

print("Кількість інверсій:", inv_count)
print("Пари інверсій:", inv_pairs)