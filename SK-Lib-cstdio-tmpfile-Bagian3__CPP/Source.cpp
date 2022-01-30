#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	FILE* fp;
	fp = tmpfile();
	char writeToFile[50] = "Creating a temporary file";

	if (fp == NULL) {
		perror("Error creating temporary file");
		exit(1);
	}

	fputs(writeToFile, fp);
	rewind(fp);

	char readFromFile[50];
	fgets(readFromFile, sizeof(readFromFile), fp);
	cout << readFromFile;
	fclose(fp);

	_getch();
	return 0;
}