#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>
void copy()
{
	setlocale(0, "Ru");
	FILE* inFile, * outFile;
	char a;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\input1.txt", "r");
	fopen_s(&outFile, "C:\\Users\\rahim\\Desktop\\output.txt", "w");
	a = fgetc(inFile);
	while (a != EOF)
	{
		fputc(a, outFile);
		a = fgetc(inFile);
	}
	fclose(inFile);
	fclose(outFile);
	system("pause");
	return 0;
}