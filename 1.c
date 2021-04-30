#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>
void reverse()
{
	setlocale(0, "Ru");
	int mass[10];
	FILE* inFile;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\input.txt", "r");
	for (int i = 0; i < 10; ++i)
	{
		fscanf_s(inFile, "%d", &mass[i]);
	}
	for (int i = 9; i >= 0; --i)
	{
		printf("%d", mass[i]);
	}
	printf("\n");
	fclose(inFile);
	system("pause");
	return 0;
}