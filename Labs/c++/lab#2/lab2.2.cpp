#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void ErrorHandler() {
    cout << "input is wrong!" << endl << endl;
    while (getchar() != '\n') {}
    _getch();
}

int main()
{
    float a1, b1, c1, a2, b2, c2;
    char key = ' ';

    while (key != 'e')
    {
        system("cls");

        cout << "Input a1: ";
        if (scanf_s("%f", &a1) != 1) {
            ErrorHandler();
            continue;
        }
        cout << "Input b1: ";
        if (scanf_s("%f", &b1) != 1) {
            ErrorHandler();
            continue;
        }
        cout << "Input c1: ";
        if (scanf_s("%f", &c1) != 1) {
            ErrorHandler();
            continue;
        }
        cout << a1 << "x + " << b1 << "y + " << c1 << " = 0" << endl << endl;;

        cout << "Input a2: ";
        if (scanf_s("%f", &a2) != 1) {
            ErrorHandler();
            continue;
        }
        cout << "Input b2: ";
        if (scanf_s("%f", &b2) != 1) {
            ErrorHandler();
            continue;
        }
        cout << "Input c2: ";
        if (scanf_s("%f", &c2) != 1) {
            ErrorHandler();
            continue;
        }
        cout << a2 << "x + " << b2 << "y + " << c2 << " = 0" << endl << endl;;

        if ((a1 / a2 == b1 / b2) && (a1 / a2 != c1 / c2))
            cout << "The lines are parallel!" << endl;
        else
            if ((a1 / a2 == b1 / b2) && (a1 / a2 == c1 / c2))
                cout << "The lines are equal!" << endl;
            else
                if ((a1 * a2) + (b1 * b2) == 0)
                    cout << "The lines are perpendicular!" << endl;
                else
                    if (a1 / a2 != b1 / b2)
                        cout << "The lines intersect!" << endl;

        cout << "Press E to exit or any key to restart." << endl;
        key = _getch();
    }

}