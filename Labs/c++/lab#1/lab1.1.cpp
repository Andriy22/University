#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

	// gets_s and puts"
	char str2[20]; // строка длиной до 20 символов.
	cout << "gets_s(). Input text: ";
	gets_s(str2, _countof(str2)); // Функция gets_s() принимает параметры строку в которую будет записано все что пользователь введет с клавиатуры и длину строки. Функция _countof() принимает параметр строку и возвращает ее длину
	cout << "puts(). Result: ";
	puts(str2); // Функция puts()  принимает параметр строку и выводит ее на экран 
	cout << endl;

	// getchar and putchar"
	cout << "getchar(). Input symbol: ";
	int symb = getchar(); // Функция getchar() считывает первый введенную в консоль символ и записывает его номер в переменную symb
	cout << "putchar(). Result: ";
	putchar(symb); // Функция putchar() принимает параметр номер символа и выводит символ на экран
	cout << endl;


	//getch and putch
	cout << "_getch(). Input symbol: ";
	int c = _getch(); // Функция _getch() считывает введенный в консоль символ и записывает его номер в переменную symb
	cout << endl;
	cout << "_putch(). Result: ";
	_putch(c); // Функция _putch() принимает параметр номер символа и выводит символ на экран 
	cout << endl;

	// _cscanf_s and _cprintf
	char name[20];
	cout << "_cscanf_s(). Input text: ";
	_cscanf_s("%s", name);  // Функция _cscanf_s() принимает параметры: формат и переменную в которую будут записаны данные введенные с консоли
	cout << endl;
	cout << "_cprintf(). Result: ";
	_cprintf("%s", name);  // Функция _cprintf() принимает параметры: формат и переменную данные с которой будут выведены в консоль
	cout << endl;

	// gets_s and _cputs
	cout << "_cget_s(). Input text: ";
	char str[20]; // cтрока длиной 20 символов
	size_t size_read; 
	_cgets_s(str, &size_read); // Функция _cgets_s() принимает параметры: строку в которую будет записано все что пользователь введет с клавиатуры и переменную в которую будет записано сколько символов пользователь ввел.
	cout << "_cputs(). Result: " << size_read;
	_cputs(str); // Функция _cputs()  принимает параметр строку и выводит ее на экран
	cout << endl;



	// scanf_s and printf_s
	char str3[21];
	cout << "scanf_s(). Input text: ";
	scanf_s("%s", str3, _countof(str3)); // Функция _cscanf_s () принимает параметры: формат и переменную в которую будут записаны данные введены с консоли, а также длину
	cout << "printf(). Result: ";
	printf_s("%s", str3); // Функция printf_s() принимает параметры: формат и переменную данные с которой будут выведены в консоль
	cout << endl;


	// scanf_s and printf_s
	char  tokenstring[] = "Hello 15 15"; // Строка с которой функция sscanf_s() берет данные
	char  s[81]; // Строка длиной 81 символ
	char  result[100];  // Строка длиной 100 символ
	int   i; // целое число
	float fp; // число с точкой
	cout << "sscanf_s(). tokenString: " << tokenstring;
	sscanf_s(tokenstring, "%s%d%f", s, (unsigned)_countof(s), &i, &fp); // Функция sscanf_s() принимает параметры: cтроку с которой берет данные, формат и переменные в которые записывает данные
	cout << endl;
	cout << "sprintf_s(). Result: ";
	sprintf_s(result, "%s %d %f", s, i, fp); // Функция sprintf_s() принимает параметры: cтроку в которую будут записаны данные, формат данных и переменные с которых функция возьмет данные
	cout << result << endl;



}
