#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
		double a, b, result;

		cout << "Katet a = ";
		cin >> a;
		cout << "Katet b = ";
		cin >> b;

		if (a == 0 || b == 0) {
			cout << "Katet [a] or [b] can't be 0!" << endl;
			return 0;
		}

		result = sqrt(pow(a, 2) + pow(b, 2));

		cout << "Gipotenusa = " << result;

		return 0;
	
}
