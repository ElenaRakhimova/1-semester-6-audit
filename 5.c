#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <Windows.h>
void permutation()
{
	setlocale(0, "Ru");
	int* a;
	int x, n;
	printf("¬ведите размер массива \n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	if (n % 2 == 0)
	{
		for (int i = 0; i < n - 1; i += 2)
		{
			x = a[i];
			a[i] = a[i + 1];
			a[i + 1] = x;
		}
	}
	else
	{
		for (int i = 0; i < n - 2; i += 2)
		{
			x = a[i];
			a[i] = a[i + 1];
			a[i + 1] = x;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}