#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main()
{
    double a1, b1, c1, a2, b2, c2;
    char key = ' ';
    
    while (key != 'e')
    {
        system("cls");

        cout << "Input a1: ";
        cin >> a1;
        cout << "Input b1: ";
        cin >> b1;
        cout << "Input c1: ";
        cin >> c1;
        cout << a1 << "x + " << b1 << "y + " << c1 << " = 0" << endl << endl;;

        cout << "Input a2: ";
        cin >> a2;
        cout << "Input b2: ";
        cin >> b2;
        cout << "Input c2: ";
        cin >> c2;
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