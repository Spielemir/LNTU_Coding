def is_anagram(s1, s2):
    if not isinstance(s1, str) or not isinstance(s2, str):
        raise TypeError("Обидва аргументи мають бути рядками")
        
    clean1 = "".join(char for char in s1.lower() if not char.isspace())
    clean2 = "".join(char for char in s2.lower() if not char.isspace())
    
    return sorted(clean1) == sorted(clean2)


def group_anagrams(words):
    if not isinstance(words, list):
        raise TypeError("Аргумент повинен бути списком")
        
    groups = {}
    for word in words:
        if not isinstance(word, str):
            raise ValueError("Усі елементи вхідного списку повинні бути рядками")
            
        clean_word = "".join(char for char in word.lower() if not char.isspace())
        key = "".join(sorted(clean_word))
        
        if key not in groups:
            groups[key] = []
        groups[key].append(word)
        
    return groups


print("--- Тест 1: Перевірка окремих анаграм ---")
print(is_anagram("актор", "тигр"))
print(is_anagram("літо", "тіло"))

print("\n--- Тест 2: Групування стандартного списку ---")
words_list = ["актор", "тертка", "тіло", "ранок", "крона", "літо", "норка", "карета"]
grouped = group_anagrams(words_list)
for k, v in grouped.items():
    print(f"Ключ '{k}': {v}")

print("\n--- Тест 3: Перевірка стійкості до помилок типу даних ---")
try:
    group_anagrams(["слово", None, "волос"])
except ValueError as e:
    print("Зловлено виключення:", e)