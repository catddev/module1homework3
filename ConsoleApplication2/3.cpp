#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("������� ��: ");
	scanf("%d", &n);


	if (n == 1)
	{
		// ��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������.

		int X, A=0, y=0, b;
		printf("X=\n A=\t");
		scanf("%d\t %d\n", &X, &A);

		b = A / X;
		y = y*b;

		printf("��������� 1 �� =%d\n ��������� Y ��=%d\n", b, y);

	}
	else if (n == 2) {
		// ������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B (����������� A �� ����� 0)

		int A, x=0, B=0;
		printf("vvedite  A=");
		scanf("%d", &A);
		printf("vvedite  B=");
		scanf("%d", &B);

		x = -B / A;

		printf("x=%d\n", x);


	}


}
