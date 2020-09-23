#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

	// gets_s and puts"
	char str2[20];
	cout << "gets_s(). Input text: ";
	gets_s(str2);
	cout << "puts(). Result: ";
	puts(str2);
	cout << endl;

	// getchar and putchar"
	cout << "getchar(). Input symbol: ";
	int symb = getchar();
	getchar();
	cout << "putchar(). Result: ";
	putchar(symb);
	cout << endl;


	//getch and putch
	cout << "_getch(). Input symbol: ";
	int c = _getch();
	cout << endl;
	cout << "_putch(). Result: ";
	_putch(c);
	cout << endl;

	// _cscanf_s and _cprintf
	char name[20];
	cout << "_cscanf_s(). Input text: ";
	_cscanf_s("%s", name);
	cout << endl;
	cout << "_cprintf(). Result: ";
	_cprintf("%s", name);
	cout << endl;

	// gets_s and _cputs
	cout << "get_s(). Input text: ";
	char str[20];
	size_t size_read;
	_cgets_s(str, &size_read);
	cout << "_cputs(). Result: ";
	_cputs(str);
	cout << endl;


	
	// scanf_s and printf_s
	char str3[21];
	cout << "scanf_s(). Input text: ";
	scanf_s("%s", str3, _countof(str3));
	cout << "printf(). Result: ";
	printf_s("%s", str3);
	cout << endl;


	// scanf_s and printf_s
	char  tokenstring[] = "Hello 15 15";
	char  s[81];
	char  result[100];
	int   i;
	float fp;
	cout << "sscanf_s(). tokenString: "<<tokenstring;
	sscanf_s(tokenstring, "%s%d%f", s, (unsigned)_countof(s), &i, &fp);
	cout << endl;
	cout << "sprintf_s(). Result: ";
	sprintf_s(result, "%s %d %f", s, i, fp);
	cout <<result<< endl;
	
}
