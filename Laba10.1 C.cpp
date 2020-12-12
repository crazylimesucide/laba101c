#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char ch1;
	char ch2;
	char ch3;
	char ch4;
	char ch5;
	const int LEN = 80;
	char s[LEN];

	FILE* f;
	char fname[61];
	cout << "Enter file name: "; cin.getline(fname, sizeof(fname));
	if ((f = fopen(fname, "w+")) == NULL)
	{
		cerr << "Error opening file '" << fname << "'" << endl;
		exit(1);
	}
	do {
		cout << "Enter string (empty - to exit): ";
		cin.getline(s, LEN - 1);
		strcat(s, "\n");
		fputs(s, f);
	} while (*s != '\n');

	rewind(f);

	int k = 0;

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		ch3 = fgetc(f);
		ch4 = fgetc(f);
		ch5 = fgetc(f);
		if ((ch1 == 'w') && (ch2 == 'h') && (ch3 == 'i') && (ch4 == 'l') && (ch5 == 'e'))
		{
			k = k + 1;
		}
	}

	rewind(f);

	ch1 = fgetc(f);

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		ch3 = fgetc(f);
		ch4 = fgetc(f);
		ch5 = fgetc(f);
		if ((ch1 == 'w') && (ch2 == 'h') && (ch3 == 'i') && (ch4 == 'l') && (ch5 == 'e'))
		{
			k = k + 1;
		}
	}
	rewind(f);

	ch1 = fgetc(f);
	ch2 = fgetc(f);

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		ch3 = fgetc(f);
		ch4 = fgetc(f);
		ch5 = fgetc(f);
		if ((ch1 == 'w') && (ch2 == 'h') && (ch3 == 'i') && (ch4 == 'l') && (ch5 == 'e'))
		{
			k = k + 1;
		}
	}
	rewind(f);

	ch1 = fgetc(f);
	ch2 = fgetc(f);
	ch3 = fgetc(f);

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		ch3 = fgetc(f);
		ch4 = fgetc(f);
		ch5 = fgetc(f);
		if ((ch1 == 'w') && (ch2 == 'h') && (ch3 == 'i') && (ch4 == 'l') && (ch5 == 'e'))
		{
			k = k + 1;
		}
	}
	rewind(f);

	ch1 = fgetc(f);
	ch2 = fgetc(f);
	ch3 = fgetc(f);
	ch4 = fgetc(f);

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		ch3 = fgetc(f);
		ch4 = fgetc(f);
		ch5 = fgetc(f);
		if ((ch1 == 'w') && (ch2 == 'h') && (ch3 == 'i') && (ch4 == 'l') && (ch5 == 'e'))
		{
			k = k + 1;
		}
	}

	cout << "kilk 'while' = " << k;
	return 0;
