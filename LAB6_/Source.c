#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define M_PI            3.14159265358979323846
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
void task2()//номер2 (вариант 9)
{
	setlocale(LC_ALL, "RUS");
	float num;
	printf("Введите число:\n");
	scanf("%g", &num);
	if ((num >= 0)&&(num<=1)) {
		printf("%g", num*num-num);
	}
	else {
		printf("%g", pow(num,2)-sin(num*num* M_PI));

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
	int number, one, two, three,four;
	printf("Введите четырехзначное число:\n");
	scanf("%d",&number);
     one = number / 1000;
	two = (number / 10) % 10;
	three = number % 100 / 10;
	four = number % 10;
	if (one % 2==0)  printf("Число тысяч-четное");
	if (two % 2 == 0)  printf("Число сотен-четное");
	if (three % 2 == 0)  printf("Число десятков-четное");
	if (four % 2 == 0)  printf("Число единиц-четное");
}
	
