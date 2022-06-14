#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int year, ost;
    cout << "введите год ";
    cin >> year;

    cout << "год ";

    ost = year % 10;
    switch (ost) {
    case 0:
        cout << "бел";
        break;
    case 1:
        cout << "бел";
        break;
    case 2:
        cout << "чёрн";
        break;
    case 3:
        cout << "чёрн";
        break;
    case 4:
        cout << "зелён";
        break;
    case 5:
        cout << "зелён";
        break;
    case 6:
        cout << "красн";
        break;
    case 7:
        cout << "красн";
        break;
    case 8:
        cout << "жёлт";
        break;
    case 9:
        cout << "жёлт";
        break;
    }

    ost = year % 12;
    switch (ost) {
    case 0:
        cout << "ой ";
        break;
    case 1:
        cout << "ой ";
        break;
    case 2:
        cout << "ой ";
        break;
    case 3:
        cout << "ой ";
        break;
    case 4:
        cout << "ой ";
        break;
    case 5:
        cout << "ой ";
        break;
    case 6:
        cout << "ого ";
        break;
    case 7:
        cout << "ого ";
        break;
    case 8:
        cout << "ого ";
        break;
    case 9:
        cout << "ой ";
        break;
    case 10:
        cout << "ой ";
        break;
    case 11:
        cout << "ой ";
        break;
    }

    ost = (year + 8) % 12;
    switch (ost) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout << "свиньи";
        break;
    }

    return 0;
}
