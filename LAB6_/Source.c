#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define M_PI            3.14159265358979323846
#include <stdio.h>
void task1() //�����1
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	printf("������� ���:\n");
	scanf("%d", &yeas);
	if (yeas & 4) printf("��� %d �� ����������", yeas);
	else printf("��� %d  ����������", yeas);
}


void task1n2() //�����1.2
{

	setlocale(LC_ALL, "RUS");
	int yeas;
	printf("������� ���:\n");
	scanf("%d", &yeas);
	if ((yeas % 4 == 0) && (yeas % 400 == 0 || yeas % 100 != 0)) printf("��� ����������", yeas);
}
void task2()//�����2 (������� 9)
{
	setlocale(LC_ALL, "RUS");
	float num;
	printf("������� �����:\n");
	scanf("%g", &num);
	if ((num >= 0)&&(num<=1)) {
		printf("%g", num*num-num);
	}
	else {
		printf("%g", pow(num,2)-sin(num*num* M_PI));

	};
}
void task2alt()//����� 2 ��� 5
{
	setlocale(LC_ALL, "RUS");
	float num;
	printf("������� �����:\n");
	scanf("%g", &num);
	printf("%g", (num > 7) ? (1 / (num - 7)) : (-3 * num + 9));
	
}
void main()//����� 3
{
	setlocale(LC_ALL, "RUS");
	int number, one, two, three,four;
	printf("������� �������������� �����:\n");
	scanf("%d",&number);
     one = number / 1000;
	two = (number / 10) % 10;
	three = number % 100 / 10;
	four = number % 10;
	if (one % 2==0)  printf("����� �����-������");
	if (two % 2 == 0)  printf("����� �����-������");
	if (three % 2 == 0)  printf("����� ��������-������");
	if (four % 2 == 0)  printf("����� ������-������");
}
	
