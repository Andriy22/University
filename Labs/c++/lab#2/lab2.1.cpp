#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main()
{
    double a, b;
    char key = ' ';
    
    while (key != 'e')
    {
        system("cls");

        cout << "Input a: ";
        cin >> a;
        cout << "Input b: ";
        cin >> b;

        if (b == 0)
            cout << "Answer: " << 0 << endl;
        else
            if (a > b)
                cout << "Answer: " << pow(a, 2) / pow(b, 2) << endl;
            else
                if (a < b)
                    cout << "Answer: " << pow(b, 2) - pow(a, 2) << endl;
                else
                    if (a == b)
                        cout << "Answer: " << 1 << endl;

        cout << "Press E to exit or any key to restart." << endl;
        key = _getch();
    }

}