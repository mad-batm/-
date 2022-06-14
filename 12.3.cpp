#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int count;
    cout << "введите количесво заданий от 10 до 40" << endl;
    cin >> count;

    if (count >= 10 && count <= 20 || count >= 25 && count <= 30 || count >= 35 && count <= 40) {
        switch (count) {
        case 10:
            cout << "десять ";
            break;
        case 11:
            cout << "одиннадцать ";
            break;
        case 12:
            cout << "двенадцать ";
            break;
        case 13:
            cout << "тринадцать ";
            break;
        case 14:
            cout << "четырнадцать ";
            break;
        case 15:
            cout << "пятнадцать ";
            break;
        case 16:
            cout << "шестнадцать ";
            break;
        case 17:
            cout << "семнадцать ";
            break;
        case 18:
            cout << "восемнадцать ";
            break;
        case 19:
            cout << "девятнадцать ";
            break;
        case 20:
            cout << "двадцать ";
            break;
        case 25:
            cout << "двадцать пять ";
            break;
        case 26:
            cout << "двадцать шесть ";
            break;
        case 27:
            cout << "двадцать семь ";
            break;
        case 28:
            cout << "двадцать восемь ";
            break;
        case 29:
            cout << "двадцать девять ";
            break;
        case 30:
            cout << "тридцать ";
            break;
        case 35:
            cout << "тридцать пять ";
            break;
        case 36:
            cout << "тридцать шесть ";
            break;
        case 37:
            cout << "тридцать семь ";
            break;
        case 38:
            cout << "тридцать восемь ";
            break;
        case 39:
            cout << "тридцать девять";
            break;
        case 40:
            cout << "сорок ";
            break;
        }
        cout << "учебных заданий" << endl;
    }

    if (count == 22 || count == 23 || count == 24 || count == 32 || count == 33 || count == 34) {
        switch (count) {
        case 22:
            cout << "двадцать два ";
            break;
        case 23:
            cout << "двадцать три ";
            break;
        case 24:
            cout << "двадцать четыре ";
            break;
        case 32:
            cout << "тридцать два ";
            break;
        case 33:
            cout << "тридцать три ";
            break;
        case 34:
            cout << "тридцать четыре ";
            break;
        }
        cout << "учебных задания" << endl;
    }

    if (count == 21 || count == 31) {
        switch (count) {
        case 21:
            cout << "двадцать одно ";
            break;
        case 31:
            cout << "тридцать одно ";
            break;
        }
        cout << "учебное задание" << endl;
    }

    return 0;
}



