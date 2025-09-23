# C-Sharp_Tasks

[![Підтримати Україну](https://badgen.net/badge/support/UKRAINE/?color=0057B8&labelColor=FFD700)](https://www.gov.uk/government/news/ukraine-what-you-can-do-to-help)

## Внесок у проєкт
1. Форк репозиторію
2. Клонування форку
3. Внесення та відправлення змін
4. Створення pull request

## Форк репозиторію
![Форк репозиторію](https://docs.github.com/assets/cb-40742/mw-1440/images/help/repository/fork-button.webp)

## Клонування форку
![Клонування форку](https://docs.github.com/assets/cb-14601/mw-1440/images/help/repository/code-button.webp)

## Внесення та відправлення змін
Основні команди Git:

git status
git add
git commit

![Основні команди Git](https://marklodato.github.io/visual-git-guide/basic-usage.svg)

### git add
`git add file_name` – додає файл до індексу (stage)

`git add .` – додає всі зміни та нові файли до індексу (stage)

### git commit
`git commit -m 'ваше повідомлення'` – створює коміт (точку в історії проєкту)

де `-m` означає, що ви хочете додати повідомлення до коміту

`git commit -am 'ваше повідомлення'` – створює коміт (точку в історії проєкту)

де `-am` означає, що ви хочете додати всі змінені файли до коміту.  
Використовуйте це замість `git add`, якщо у вас немає нових файлів, лише змінені.

### git push
`git push` – відправляє ваш коміт у форк репозиторію

усі команди в одному рядку ->

`git add . && git commit -m "ваш текст" && git push`

## Створення pull request
Для цього перейдіть у репозиторій на GitHub, де знаходиться ваш проєкт.

Ви побачите банер із повідомленням, що ваша гілка на один коміт випереджає main.

Натисніть Contribute, а потім Open a pull request.

GitHub перенаправить вас на сторінку, де буде показано відмінності між вашим форком і репозиторієм C-Sharp_Tasks.

### Натисніть Create pull request.

І… готово! 🎉
