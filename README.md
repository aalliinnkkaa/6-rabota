# 6-rabota

Этот код на языке C выполняет следующие действия:

1. Объявление и инициализация данных

- gryppa — двумерный массив из 5 строк по 40 символов каждая.
- Первая строка (`gryppa[0]`) — имя файла, остальные — просто текст.

2. Вывод имени файла

printf("Имя файла: %s\n", gryppa[0]);
Выведет:Имя файла: /slovo_pachana.txt

3. Объединение строк в одну с переносами

Результат в `pipyau`:
Adidas Vova\nTurbo\nPalto\nEralash (ne zabudem)\n\0
(При выводе через printf это будет выглядеть как 4 строки).

4. Поиск слова "zabudem" в объединённом тексте

- Проверяет, содержится ли "zabudem" в pipyau путём сравнения каждого символа.
- Если находит полное совпадение — устанавливает found = 1.

5. Вывод результата поиска

Вывод для данного кода:
Слово "zabudem" найдено в тексте
(Так как "Eralash (ne zabudem)" содержит `"zabudem"`).

Итоговая работа программы
1. Объявляет массив строк.
2. Выводит имя "файла" (первая строка).
3. Объединяет остальные строки в один текст с переносами.
4. Ищет слово "zabudem" в этом тексте.
5. Сообщает, найдено ли слово.

