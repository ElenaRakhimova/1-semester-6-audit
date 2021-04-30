#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>
void newstring()
{
	setlocale(0, "Ru");
	FILE* inFile;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\output.txt", "a+");
	fprintf(inFile, "\n new string");
	fclose(inFile);
	system("pause");
	return 0;
}