#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("введите нз: ");
	scanf("%d", &n);


	if (n == 1)
	{
		// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

		int X=0, A=0, y=0, b;
		printf("X=\t");
		scanf("%d", &X);

		printf("A=\t");
		scanf("%d", &A);

		printf("y=\t");
		scanf("%d", &y);

		b = A / X;
		y = y*b;

		printf("стоимость 1 кг =%d\n стоимость Y кг=%d\n", b, y);

	}
	else if (n == 2) {
		// Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)

		int A, x=0, B=0;
		printf("vvedite  A=\t");
		scanf("%d", &A);
		printf("vvedite  B=\t");
		scanf("%d", &B);

		x = -B / A;

		printf("x=%d\t", x);


	}

	else if (n == 3) {

		// С начала суток прошло N секунд (N — целое). Найти количество полных минут, прошедших с начала суток.

		int N = 0, M;
		printf("N=\t");
		scanf("%d", &N);

		M = N / 60;

		printf("M=%d\n", M);

	}

	else if (n == 4) {

		/* Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км.
		Определить расстояние между ними через T часов, если автомобили первоначально движутся навстречу друг другу.
		Данное расстояние равно модулю разности начального расстояния и общего пути, проделанного автомобилями;
		общий путь = время · суммарная скорость */

		int V1 = 0, V2 = 0, T = 0, S = 0, ST;
		printf("V1=");
		scanf("%d", &V1);

		printf("V2=");
		scanf("%d", &V2);

		printf("T=");
		scanf("%d", &T);

		printf("S=");
		scanf("%d", &S);

		ST = S - T*(V1 + V2);
		printf("ST=%d\n", ST);

	}

	else if (n == 5) {

		// Даны длины сторон прямоугольного параллелепипеда. Найти его объем и площадь боковой поверхности

		int a, b, c, V, S;
		printf("a=");
		scanf("%d", &a);
		printf("b=");
		scanf("%d", &b);
		printf("c=");
		scanf("%d", &c);

		V = a*b*c;
		S = 2 * (a*b + b*c + a*c);

		printf("V=%d \nS=%d\n", V, S);

	}
	else if (n == 6) {

		// Известны координаты на плоскости двух точек. Составить программу вычисления расстояния между ними.

		int x1, x2, y1, y2, S;
		printf("x1=");
		scanf("%d", &x1);

		printf("x2=");
		scanf("%d", &x2);

		printf("y1=");
		scanf("%d", &y1);

		printf("y2=");
		scanf("%d", &y2);

		S = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		printf("S=%d\n", S);

	}

	else if (n == 7) {

		// Известны объем и масса тела. Определить плотность материала этого тела

		int m, v;
		double p;

		printf("m=");
		scanf("%d", &m);

		printf("v=");
		scanf("%d", &v);

		p = m / v;
		printf("p=%f\n", p);

	}

	else if (n == 8) {

		// вычисления значения функции z= x^3 – 2.5xy+1.87x^2+1 при любых значениях х и y;

		float x, y, z;
		printf("x=");
		scanf("%f", &x);
		printf("y=");
		scanf("%f", &y);

		z = pow(x, 3) - 2.5*x*y + 1.87*pow(x, 2) + 1;

		printf("z=%f\n", z);

	}

	else if (n == 9) {

		// вычисления значения функции x= 3.56 a+b3-5.8b2+3.8a-1.5 при любых значениях a и b.

		float a, b, x;
		printf("a=");
		scanf("%f", &a);
		printf("b=");
		scanf("%f", &b);

		x = 3.56*a + pow(b, 3) - 5.8*pow(b, 2) + 3.8*a - 1.5;

		printf("x=%f\n", x);

	}

	else if (n == 10) {

		// Дана сторона квадрата. Найти его периметр

		int a, p;
		printf("a=");
		scanf("%d", &a);

		p = 4 * a;
		printf("p=%d\n", p);
	}

	else if (n == 11) {

		// Дан радиус окружности. Найти ее диаметр

		float r, d;
		printf("r=");
		scanf("%f", &r);

		d = 2 * r;
		printf("d=%f\n", d);


	}

	else {
		
		printf("нет заданий\n");

	}
}
