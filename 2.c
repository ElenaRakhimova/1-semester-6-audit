#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>
void maximum()
{
	setlocale(0, "Ru");
	float mass[5], max = 0;
	FILE* inFile, * outFile;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\input1.txt", "r");
	fopen_s(&outFile, "C:\\Users\\rahim\\Desktop\\output.txt", "w");
	for (int i = 0; i < 5; ++i)
	{
		fscanf_s(inFile, "%f", &mass[i]);
		if (mass[i] > max)
			max = mass[i];
	}
	printf("%f", max);
	fprintf(outFile, "%f", max);
	fclose(inFile);
	printf("\n");
	fclose(outFile);
	system("pause");
	return 0;
}