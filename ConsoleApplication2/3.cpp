#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;


	if (n == 1)
	{
		// ��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������.

		int X, A, y, b;
		printf("X=\t A=\t");
		scanf("%d\t %d\n", &X, &A);

		b = A / X;
		y = y*b;

		printf("��������� 1 �� =%d\n ��������� Y ��=%d\n", b, y);

	}
	