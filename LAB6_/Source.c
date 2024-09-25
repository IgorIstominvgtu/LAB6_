#include <locale.h>

#include <stdio.h>
void task1() //номер1
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	printf("Введите год:\n");
	scanf("%d", &yeas);
	if (yeas & 4) printf("Год %d не високосный", yeas);
	else printf("Год %d  високосный", yeas);
}


void task1n2() //номер1.2
{

	setlocale(LC_ALL, "RUS");
	int yeas;
	printf("Введите год:\n");
	scanf("%d", &yeas);
	if ((yeas % 4 == 0) && (yeas % 400 == 0 || yeas % 100 != 0)) printf("Год високосный", yeas);
}
void task2()//номер2 (вариант 5)
{
	setlocale(LC_ALL, "RUS");
	float num;
	printf("Введите число:\n");
	scanf("%g", &num);
	if (num > 7) {
		printf("%g", 1 / (num - 7));
	}
	else {
		printf("%g", -3 * num + 9);

	};
}
void task2alt()//номер 2 вар 5
{
	setlocale(LC_ALL, "RUS");
	float num;
	printf("Введите число:\n");
	scanf("%g", &num);
	printf("%g", (num > 7) ? (1 / (num - 7)) : (-3 * num + 9));
	
}
void main()//номер 3
{
	setlocale(LC_ALL, "RUS");
	float x;
	printf("Введите число:\n");
	scanf("%g", &x);
	printf("%g,%g,%g", sqrt(x), x, pow(x, 2));
}