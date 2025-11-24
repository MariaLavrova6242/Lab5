# Домашняя работа к лабораторной работе 4.
## Условия задачи:
расчитать значение введённой величины
## 1. Алгоритм и блок схема:
### Алгоритм:
1. Начало
2. Задать переменнные:
  - float x = 3.251
  - float y = 0.325
  - double z = 0.466e-4
  - float c

4. Расчёт величины c:
   c = 2.0^y^x + (3.0^x)^y) - ((y * (atan(z) - (pi / 6))) / |x| + (1 / y^2.0 + 1)))
6. Вывести результаты расчётов с подстановкой значений в текст.
7. Конец

### Блок схема
![Блок схема алгоритма](4.drawio.png)
## 2. Реализация программы:
    	  #include <stdio.h>
    #include <locale.h>
    #include <math.h>
    #define pi 3.1415926535 
    
    float x = 3.251;
    float y = 0.325;
    double z = 0.466e-4;
    float c;
    void main()
    {
    	setlocale(LC_ALL, "RUS");
    	c = powf(2.0, powf(y, x)) + powf(3.0, x * y) - ((y * (atan(z) - (pi / 6))) / (fabsf(x) + (1 / (powf(y, 2.0) + 1))));
    	printf("%f", c);
    }
## 3. Результат работы программы
<img  width=“250” src="https://github.com/MariaLavrova6242/Lab4/blob/master/Lab4.png" >
## 4. Информация о разработчике
Лаврова Мария, бИПТ-252# Lab4
