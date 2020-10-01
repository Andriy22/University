#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main()
{

        float a, b, answer;
        char key = ' ';

        while (key != 'e')
        {
            system("cls");

            cout << "Input a: ";
            if (scanf_s("%f", &a) != 1) {
                cout << "input a is wrong!" << endl << endl;
                while (getchar() != '\n') {}
                _getch();
                continue; 
            }
            cout << "Input b: ";
            if (scanf_s("%f", &b) != 1) {
                cout << "input b is wrong!" << endl << endl;
                while (getchar() != '\n') {}
                _getch();
                continue;
            }

            if (b == 0)
                answer = 0;
            else
                if (a > b)
                    answer = pow(a, 2) / pow(b, 2);
                else
                    if (a < b)
                        answer = pow(b, 2) - pow(a, 2);
                    else
                        if (a == b)
                            answer = 1;
            cout << "Answer: " << answer << endl << endl;;

          

            cout << "Press E to exit or any key to restart." << endl;
            key = _getch();
        }

}