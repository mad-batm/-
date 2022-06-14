#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char dir;
    int N;
    cout << "введите исходное направление робота" << endl;
    cout << "N-север, S-юг, W-запад, E-восток" << endl;
    cin >> dir;
    cout << "0-продолжать движение, 1-поворот налево, -1-поворот направо" << endl;
    cin >> N;

    if (dir == 'N') {
        switch (N) {
        case 0:
            cout << "направление Север" << endl;
            break;
        case -1:
            cout << "направление Восток" << endl;
            break;
        case 1:
            cout << "направление Запад" << endl;
            break;

        }
    }

    if (dir == 'S') {
        switch (N) {
        case 0:
            cout << "направление Юг" << endl;
            break;
        case -1:
            cout << "направление Запад" << endl;
            break;
        case 1:
            cout << "направление Восток" << endl;
            break;

        }
    }

    if (dir == 'W') {
        switch (N) {
        case 0:
            cout << "направление Запад" << endl;
            break;
        case -1:
            cout << "направление Север" << endl;
            break;
        case 1:
            cout << "направление Юг" << endl;
            break;

        }
    }

    if (dir == 'E') {
        switch (N) {
        case 0:
            cout << "направление Восток" << endl;
            break;
        case -1:
            cout << "направление Юг" << endl;
            break;
        case 1:
            cout << "направление Север" << endl;
            break;
        }
    }
    return 0;
}

