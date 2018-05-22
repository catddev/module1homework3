#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("введите нз: ");
	scanf("%d", &n);


	if (n == 1)
	{
		// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

		int X, A=0, y=0, b;
		printf("X=\n A=\t");
		scanf("%d\t %d\n", &X, &A);

		b = A / X;
		y = y*b;

		printf("стоимость 1 кг =%d\n стоимость Y кг=%d\n", b, y);

	}
	else if (n == 2) {
		// Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)

		int A, x=0, B=0;
		printf("vvedite  A=");
		scanf("%d", &A);
		printf("vvedite  B=");
		scanf("%d", &B);

		x = -B / A;

		printf("x=%d\n", x);


	}


}
