def palindrome(s):
    if not isinstance(s, str):
        raise TypeError("Вхідний аргумент повинен бути рядком")
    
    cleaned = ""
    for char in s.lower():
        if char.isalnum():
            cleaned += char
            
    return cleaned == cleaned[::-1]


def longest_palindrome(lst):
    if not isinstance(lst, list):
        raise TypeError("Аргумент повинен бути списком")
        
    if not lst:
        return ""
        
    longest = ""
    for item in lst:
        if not isinstance(item, str):
            raise ValueError("Усі елементи списку обов'язково мають бути рядками")
            
        if palindrome(item):
            if len(item) > len(longest):
                longest = item
                
    return longest


print("--- Тест 1: Перевірка функції palindrome ---")
print(palindrome("А роза упала на лапу Азора"))
print(palindrome("Python"))

print("\n--- Тест 2: Звичайний список рядків ---")
strings1 = ["привіт", "дід", "мадам", "світ", "радар"]
print("Найдовший паліндром:", longest_palindrome(strings1))

print("\n--- Тест 3: Граничні випадки (порожній список та помилки) ---")
print("Порожній список:", longest_palindrome([]))
try:
    longest_palindrome(["козак", 123])
except ValueError as e:
    print("Помилка даних:", e)