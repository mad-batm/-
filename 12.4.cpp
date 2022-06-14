#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int num, a, b, dec, count;
    cout << "число от 100 до 999" << endl;
    cin >> num;

    a = num % 100;
    dec = num - a;

    switch (dec) {
    case 100:
        cout << "сто ";
        break;
    case 200:
        cout << "двести ";
        break;
    case 300:
        cout << "триста ";
        break;
    case 400:
        cout << "четыреста ";
        break;
    case 500:
        cout << "пятьсот ";
        break;
    case 600:
        cout << "шестьсот ";
        break;
    case 700:
        cout << "семьсот ";
        break;
    case 800:
        cout << "восемьсот ";
        break;
    case 900:
        cout << "девятьсот ";
        break;
    }

    b = a % 10;
    a = a - b;

    if (a > 10 && a < 20) {
        switch (a) {
        case 11:
            cout << "одиннадцать";
            break;
        case 12:
            cout << "двенадцать";
            break;
        case 13:
            cout << "тринадцать";
            break;
        case 14:
            cout << "четырнадцать";
            break;
        case 15:
            cout << "пятнадцать";
            break;
        case 16:
            cout << "шестнадцать";
            break;
        case 17:
            cout << "семнадцать";
            break;
        case 18:
            cout << "восемнадцать";
            break;
        case 19:
            cout << "девятнадцать";
            break;

        }
    }
    else {
        switch (a) {
        case 10:
            cout << "десять ";
            break;
        case 20:
            cout << "двадцать ";
            break;
        case 30:
            cout << "трицать ";
            break;
        case 40:
            cout << "сорок ";
            break;
        case 50:
            cout << "пятьдесят ";
            break;
        case 60:
            cout << "шестьдесят ";
            break;
        case 70:
            cout << "семьдесят ";
            break;
        case 80:
            cout << "восемьдесят ";
            break;
        case 90:
            cout << "девяносто ";
            break;
        }

        switch (b) {
        case 1:
            cout << "один" << endl;
            break;
        case 2:
            cout << "два" << endl;
            break;
        case 3:
            cout << "три" << endl;
            break;
        case 4:
            cout << "четыре" << endl;
            break;
        case 5:
            cout << "пять" << endl;
            break;
        case 6:
            cout << "шесть" << endl;
            break;
        case 7:
            cout << "семь" << endl;
            break;
        case 8:
            cout << "восемь" << endl;
            break;
        case 9:
            cout << "девять" << endl;
            break;
        }

    }

    return 0;
}

