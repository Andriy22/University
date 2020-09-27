#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

	// gets_s and puts"
	char str2[20]; // рядок довжиною до 20 символів.
	cout << "gets_s(). Input text: ";
	gets_s(str2, _countof(str2)); // Функція gets_s () приймає параметри рядок в який буде записано все що користувач введе з клавіатури і довжину рядка. Функція _countof () приймає параметр рядок і повертає його довжину
	cout << "puts(). Result: ";
	puts(str2); // Функція puts () приймає параметр рядок і виводить його на екран
	cout << endl;

	// getchar and putchar"
	cout << "getchar(). Input symbol: ";
	int symb = getchar(); // Функція getchar () зчитує перший введений в консоль символ і записує його номер в змінну symb
	cout << "putchar(). Result: ";
	putchar(symb); //Функція putchar () приймає параметр номер символу і виводить символ на екран
	cout << endl;


	//getch and putch
	cout << "_getch(). Input symbol: ";
	int c = _getch(); // Функція _getch () зчитує введений в консоль символ і записує його номер в змінну c
	cout << endl;
	cout << "_putch(). Result: ";
	_putch(c); // Функція _putch () приймає параметр номер символу і виводить символ на екран
	cout << endl;

	// _cscanf_s and _cprintf
	char name[20];
	cout << "_cscanf_s(). Input text: ";
	_cscanf_s("%s", name);  // Функція _cscanf_s () приймає параметри: формат і змінну в яку будуть записані дані введені з консолі
	cout << endl;
	cout << "_cprintf(). Result: ";
	_cprintf("%s", name);  //Функція _cprintf () приймає параметри: формат і змінну, дані з якої будуть виведені в консоль
	cout << endl;

	// gets_s and _cputs
	cout << "_cget_s(). Input text: ";
	char str[20]; // Рядок довжиною 20 символів
	size_t size_read; 
	_cgets_s(str, &size_read); // Функція _cgets_s () приймає параметри: рядок в яку буде записано все що користувач введе з клавіатури і змінну в яку буде записано скільки символів користувач ввів.
	cout << "_cputs(). Сount of symbols: " << size_read << " Result: ";
	_cputs(str); //Функція _cputs () приймає параметр рядок і виводить його на екран
	cout << endl;



	// scanf_s and printf_s
	char str3[21];
	cout << "scanf_s(). Input text: ";
	scanf_s("%s", str3, _countof(str3)); //Функція _cscanf_s () приймає параметри: формат і змінну в яку будуть записані дані введені з консолі, а також довжину
	cout << "printf(). Result: ";
	printf_s("%s", str3); // Функція printf_s () приймає параметри: формат і змінну, дані з якої будуть виведені в консоль
	cout << endl;


	// scanf_s and printf_s
	char  tokenstring[] = "Hello 15 15"; // Рядок з якою функція sscanf_s () бере дані
	char  s[81]; // Рядок довжиною 81 символ
	char  result[100];  // Рядок довжиною 100 символ
	int   i; // ціле число
	float fp; // число з крапкой
	cout << "sscanf_s(). tokenString: " << tokenstring;
	sscanf_s(tokenstring, "%s%d%f", s, (unsigned)_countof(s), &i, &fp);// Функція sscanf_s () приймає параметри: Рядок з якого бере дані, формат і змінні в які записує дані
	cout << endl;
	cout << "sprintf_s(). Result: ";
	sprintf_s(result, "%s %d %f", s, i, fp);// Функція sprintf_s () приймає параметри: Рядок в який будуть записані дані, формат даних і змінні з яких функція візьме дані
	cout << result << endl;



}
