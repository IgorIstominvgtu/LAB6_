#include <locale.h>

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
void task2()//�����2 (������� 5)
{
	setlocale(LC_ALL, "RUS");
	float num;
	printf("������� �����:\n");
	scanf("%g", &num);
	if (num > 7) {
		printf("%g", 1 / (num - 7));
	}
	else {
		printf("%g", -3 * num + 9);

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
	float x;
	printf("������� �����:\n");
	scanf("%g", &x);
	printf("%g,%g,%g", sqrt(x), x, pow(x, 2));
}