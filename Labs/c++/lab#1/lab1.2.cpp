#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

	double a, b, c, d, result;

	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	cout << "D = ";
	cin >> d;


	if (d == 0) {
		cout << "D can't be 0" << endl;
		return 0;
	}

	result = (2 * a - pow(b, 2)) / (d * (sin(c) - 4.5));

	cout << "x = " << result << endl;

	return 0;
	
}
