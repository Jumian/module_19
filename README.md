## Задача ##
#### Цели домашнего задания ####
Приобрести практическое понимание работы с файлами.

#### Научиться: #### 

- открывать файлы по указанному пути,
- считывать разные типы данных из текстовых файлов,
- считывать данные из бинарных файлов,
- составить простейшие текстовые данные в редакторе,
- считывать массивы данных.


#### Что входит в задание #### 
- Разработать программу поиска слов в файле.
- Разработать простейший просмотрщик текстовых файлов.
- Реализовать программу чтения и анализа ведомости с выплатами.
- Разработать детектор PNG-файла.
- Реализовать версию игры «Что? Где? Когда?».


#### Общие условия #### 
Разработка выполняется в среде CLion. Текстовые документы можно редактировать в стандартном блокноте.



### Задание 1. Разработка программы поиска слов в файле ###

####  Что нужно сделать #### 
Составьте небольшой текстовый файл «words.txt», в котором последовательно, через пробелы и переносы строк расположены различные слова. Можете использовать любые англоязычные слова. Разработайте программу, которая искала бы среди этих слов нужное пользователю и выводила бы общее количество повторений этого слова. 0 — если слово вообще не присутствует в файле.



####  Что оценивается #### 
Корректность работы программы на созданных вами вводных данных. Число найденных слов должно соответствовать.



####  Как отправить задание на проверку #### 
Прислать ссылку на repl.it или файл .срр с решением.





###  Задание 2. Разработка просмотрщика текстовых файлов ### 


#### Что нужно сделать ####
Разработайте простейший просмотрщик текстовых файлов. В начале программы пользователь вводит путь к текстовому файлу, который требуется открыть и просмотреть. Внутренности файла необходимо вывести в стандартный вывод. Программа должна работать для любых текстовых файлов в формате TXT, но вы можете создать и свой отдельный файл для теста. Главное, чтобы файл был англоязычным, дабы избежать проблем с кодировками.



#### Советы и рекомендации #### 
Для проверки того, был ли на самом деле открыт файл, используйте метод is_open. Он вернёт true, если файл был благополучно открыт, и false, если что-то пошло не так, к примеру, если путь к файлу невалидный.
Файл надо считывать постепенно, отдельными фрагментами, ведь он может быть весьма большим. Для этого лучше всего пользоваться методом gcount, так как он ещё вернёт количество байт, которые были считаны по факту методом read. Сами эти фрагменты могут храниться в специальном буфере, как и в примере из лекций, но его размер и второй аргумент к функции read надо рассчитать так, чтобы выводились все символы, без обрезки последней буквы.
Файл можно открыть в бинарном формате.


#### Что оценивается ####
Показ файла на экране должен соответствовать тому, что мы наблюдаем в стандартном блокноте.



#### Как отправить задание на проверку #### 
Прислать ссылку на repl.it или файл .срр с решением.





### Задание 3. Реализация программы чтения ведомости ###


#### Что нужно сделать ####
Реализуйте программу чтения информации из ведомости по учёту выплат. Сама ведомость представляет собой следующую таблицу:

- имя и фамилия человека;
- количество денег, которые были выплачены лицу;
- дата выплаты в формате ДД.ММ.ГГГГ.

На основе данных из ведомости следует подсчитать общее количество выплаченных средств и определить человека с максимальной суммой выплат.



#### Пример данных ведомости ####
```
Tom Hanks 35500 10.11.2020
Rebecca Williams 85000 1.1.2021
Sally Field 15600 15.8.2021
Michael Humphreys 29400 23.5.2020
Harold Herthum 74300 9.6.2019
George Kelly 45000 12.3.2018
Bob Penny 12500 13.5.2020
John Randall 23400 2.10.2020
Sam Anderson 6500 15.7.2020
Margo Moorer 12350 24.2.2019
```

#### Что оценивается ####
Корректное отображение общей суммы выплат и самого крупного получателя денежных средств.



#### Как отправить задание на проверку ####
Прислать ссылку на repl.it или файл .срр с решением.





### Задание 4. Разработка детектора PNG-файла ### 
#### Что нужно сделать ####
Разработайте программу, которая получает на вход, в стандартный ввод, путь к файлу. На выходе программа должна определить, является ли данный файл PNG-изображением. Данная процедура не просто должна смотреть на расширение файла, но и произвести минимальный анализ его внутренностей, в бинарном режиме.

Внутренности валидного бинарного файла начинаются со специального 8-байтового заголовка. Нас будут интересовать первые четыре байта. Первый байт всегда имеет значение −119 (число со знаком минус), а следующие — это просто символы ‘P’, ‘N’, ‘G’, расположенные друг за другом. Обратите внимание, что все они в верхнем регистре.

По результатам проверки пути и внутренностей требуется сообщить пользователю о результате проверки в стандартный вывод.



#### Советы и рекомендации ####
Чтобы определить расширение файла, используйте функцию substr, которая получает офсет и длину подстроки и возвращает её.



#### Что оценивается #### 
Для произвольных путей файлов, введённых пользователем, требуется выдавать корректный результат — являются ли они PNG-файлами или нет.


####  Как отправить задание на проверку #### 
Прислать ссылку на repl.it или файл .срр с решением.





### Задание 5. Реализация игры «Что? Где? Когда?» ###
#### Что нужно сделать #### 
Реализуйте простую версию интеллектуальной игры «Что? Где? Когда?».



#### Как происходит игра ####
В начале каждого хода игроки вращают волчок, то есть выбирают сектор на столе, который сейчас играет. Всего таких секторов 13. Сектор выбирается так: с клавиатуры вводится офсет (смещение) относительно текущего сектора на барабане. Исходя из этого офсета вычисляется новый активный сектор, который и будет играть в этом ходе. Если выпавший сектор уже играл, выбирает следующий неигравший за ним. В начале всей игры стрелка установлена на первом секторе.

Как только играет какой-то из секторов, с него берётся письмо с вопросом — то есть считывается из файла данного сектора. Вопрос показывается на экране.

После того как вопрос показан, от игрока ожидается ответ на него. Игрок вводит этот ответ с помощью стандартного ввода. То, что он ввёл, сравнивается с ответом, который хранится во втором файле, ассоциированном с активным сектором. Данный файл должен содержать лишь одно слово-ответ.

Если ответ знатока-игрока был правильным, ему начисляется один балл. Если неверен, то балл уходит телезрителям.

Игра продолжается до тех пор, пока или игрок, или зрители не наберут шесть баллов. После этого называется победитель и программа заканчивает работу.



#### Что оценивается ####
Игра должна корректно работать от первого хода до последнего. В результате обязательно должен выявляться победитель.



#### Как отправить задание на проверку ####
Прислать ссылку на repl.it или файл .срр с решением.