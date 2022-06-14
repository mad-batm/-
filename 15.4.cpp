#include <iostream>
#include <locale.h>

using namespace std;

float Quarter(float x, float y);

int main() {
    setlocale(LC_ALL, "Russian");
    float x, y;
    int i;
    for (i = 0; i < 3; i++) {
        cout << "введите координаты точки" << endl;
        cin >> x >> y;
        Quarter(x, y);
        cout << " " << endl;
    }
    return 0;
}

float Quarter(float x, float y) {

    if (x == 0 || y == 0)
        cout << "введите значения заново" << endl;

    if (x > 0 && y > 0)
        cout << "точка расположена в 1-ой четверти" << endl;

    if (x < 0 && y>0)
        cout << "точка расположена во 2-ой четверти" << endl;

    if (x < 0 && y < 0)
        cout << "точка расположена в 3-ей четверти" << endl;

    if (x > 0 && y < 0)
        cout << "точка расположена в 4-ой четверти" << endl;

    return 0;
}

