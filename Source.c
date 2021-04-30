#include <Windows.h>
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(0, "Ru");
	int count;
	printf("¬ведите номер задачи: ");
	scanf_s("%d", &count);
	switch (count)
	{
	case 1:
		reverse();
		break;
	case 2:
		maximum();
		break;
	case 3:
		copy();
		break;
	case 4:
		newstring();
		break;
	case 5:
		permutation();
		break;
	default:
		break;
	}
}