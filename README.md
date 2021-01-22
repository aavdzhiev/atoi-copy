# atoi-copy

## Условие
Използвайте for цикъл, за да преобразувате низ от char в целочислено число.
Направете проста реализация на библиотечната функция atoi(). Знаем, че
char '0' = 48 т.е. ако char x = '0', за да получим числото 0, трябва да
извадим int r = x – '0' = 48 – 48 . Ако имаме последователност от
чарове, записана като char s[] = '123' , трябва да вземем всеки един
елемент s[0],s[1], s[2] да го превърнем в число и да го умножим по
основата на бройната система.

## Решение на отбор №5
* дефинираме променлива масив от чарове (string), която ще използваме за input
* дефинираме си функция atoiCopy(), която приема string и връща int
* дефинираме променлива, в която ще запишем резултата
* проверяваме с if-else дали нулевият елемент на масива от char-ове е "-"
* ако е "-", го запазваме в променлива и го добавяме накрая към числото
* създаваме for цикъл, който итерира през масива от char-ове (string-а)
* s[0],s[1], s[2] да го превърнем в число -> например 9 в ascii е 57. ако извадим 0, което е 48 в ascii, ще получим резултат 9
* понеже 10тичната бройна система е позиционна, минавайки през всяка една итерация на цикъла
* умножаваме всеки елемент по основата на бройната система (*10) и така получаваме десетици, стотици и хилядни
* след това прибавяме и числото, което получихме при изваждане на char-овете
* резултатът съхраняваме в result
* накрая на функцията умножаваме result
