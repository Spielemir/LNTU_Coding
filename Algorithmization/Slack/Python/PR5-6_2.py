print("Числа від 1 до 100, кратні 4 але не кратні 6:")

for i in range(1, 101):
    if i % 6 == 0:
        continue
    if i % 4 != 0:
        continue
    print(i, end=" ")