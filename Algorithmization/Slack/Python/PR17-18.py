import re

def extract_emails(text: str) -> list:
    if not isinstance(text, str):
        return []
    return re.findall(r'[\w.+-]+@[\w-]+\.[a-zA-Z]{2,}', text)

def extract_phones(text: str) -> list:
    if not isinstance(text, str):
        return []
    raw_phones = re.findall(r'(?:\+38|38)?\s*0\s*\(?\d{2}\)?[\s.-]?\d{3}[\s.-]?\d{2}[\s.-]?\d{2}', text)
    normalized = []
    for p in raw_phones:
        digits = re.sub(r'\D', '', p)
        if len(digits) == 10 and digits.startswith('0'):
            normalized.append('+38' + digits)
        elif len(digits) == 12 and digits.startswith('380'):
            normalized.append('+' + digits)
    return normalized

def extract_urls(text: str) -> list:
    if not isinstance(text, str):
        return []
    return re.findall(r'https?://[\w.-]+(?:/[^\s]*)?', text)

def validate_email(email: str) -> bool:
    if not isinstance(email, str):
        return False
    return bool(re.match(r'^[\w.+-]+@[\w-]+\.[a-zA-Z]{2,}$', email))


print("--- Тест 1: Звичайний текст з контактами ---")
text1 = "Напишіть на test.user@gmail.com або admin@site.ua. Мій телефон 050-123-45-67, а також +38 067 987 65 43. Сайт: https://example.com/about"
print("Emails:", extract_emails(text1))
print("Phones:", extract_phones(text1))
print("URLs:", extract_urls(text1))

print("\n--- Тест 2: Граничні випадки форматів ---")
text2 = "Поганий імейл: bad@com, правильний: ok@ukr.net. Телефон: 0 (99) 1112233. Без посилань."
print("Emails:", extract_emails(text2))
print("Phones:", extract_phones(text2))
print("URLs:", extract_urls(text2))

print("\n--- Тест 3: Валідація конкретних адрес ---")
print("Валідація 'ok@ukr.net':", validate_email('ok@ukr.net'))
print("Валідація 'bad@com':", validate_email('bad@com'))
print("Валідація порожнього рядка:", validate_email(''))