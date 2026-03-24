price = float(input("Введіть ціну покупки: "))

if price < 0:
    print("Ціна не може бути від'ємною.")
elif price < 500:
    print("Розмір знижки: 0 грн.")
    print("Сума до сплати:", price, "грн.")
elif price < 999:
    discount = price * 0.05
    suma = price - discount
    print("Розмір знижки:", discount, "грн.")
    print("Сума до сплати:", suma, "грн.")
elif price < 2999:
    discount = price * 0.1
    suma = price - discount
    print("Розмір знижки:", discount, "грн.")
    print("Сума до сплати:", suma, "грн.")
else:
    discount = price * 0.15
    suma = price - discount
    print("Розмір знижки:", discount, "грн.")
    print("Сума до сплати:", suma, "грн.")