#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;


	if (n == 1)
	{
		// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

		int X, A, y, b;
		printf("X=\t A=\t");
		scanf("%d\t %d\n", &X, &A);

		b = A / X;
		y = y*b;

		printf("стоимость 1 кг =%d\n стоимость Y кг=%d\n", b, y);

	}
	