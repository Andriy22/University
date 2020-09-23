#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Hello c++";
    _getch();
    system("cls");

    char name[20];
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello: " << name << endl;
    _getch();
    system("cls");

    cout << "\t\t\t Resume\n";
    cout << "\n";
    cout << "\t\tSurname: " << "\t\tIvanov\n";
    cout << "\n";
    cout << "\t\tName: " << "\t\t\tPetro\n";
    cout << "\n";
    cout << "\t\tWork at: " << "\t\t\"Server\"\n";
    cout << "\n";
    cout << "\t\tDate of birth: " << "\t\t25.04\n";
    cout << "\n";
    _getch();
    return 0;
}
