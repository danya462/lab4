#include <stdio.h>
#include <locale.h> 
#include <math.h>
void task1();

void main()
{

	setlocale(LC_CTYPE, "RUS");
	task1();

}


void task1()
{

	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;


	puts("������� ������� char=");
	scanf("%c", &c);
	printf("char=%c, %d, %x\n", c, c, c);
	puts("������� ������� int=");
	scanf("%i", &i);
	printf("int=%d, %x\n", i, i);
	puts("������� ������� float=");
	scanf("%f", &f);
	int b = f;
	printf("%f ����� ����� %d � ������� %f\n", f, b, f - b);
	puts("������� ������� double=");
	scanf("%le", &d);
	printf("%le\n", d);
	printf("&f", 1. / i);
	printf("%d, %c, %f, %le", i, c, f, d);



}

void task2()
{
	int i = 5;
	printf("%f", 1.f/i);

}