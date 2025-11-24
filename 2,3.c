#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	float x, a, b, y, c;
	float p = 0.5;
	int m;


	puts("Программа вычисления функции");


	printf("Введите число:");
	scanf("%f", &x);

	a = log(powf(p, 2) + powf(x, 3)); // a= ln(p^2 + x ^3)
	b = exp(sqrt(fabsf(x)));//b=(e^sqrt(|X|)
	y = (powf(a, 3) / (powf(b, 2)));//y = (a^3)/(b^2)
	c = (int)y;
	m = ((((int)a % 2 == 0) + ((int)b % 2 == 0)) != 2 && ((int)a % 3 == 0 && (int)b % 3 == 0 && (int)c % 3 == 0));
	printf("Результат вычисления функции:\n при x = %f \n y = %.4f\n", x, y);
	printf("a = %f\n b = %f\n c = %d\n", a, b, c);
	printf("Условие выполнено: %d (1-да, 0-нет)", m);
	getchar();
}