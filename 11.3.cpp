#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, x1, y1, x2, y2;
    double AB, AC;
    cout << "введите координаты А" << endl;
    cin >> x >> y;
    cout << "введите координаты B" << endl;
    cin >> x1 >> y1;
    cout << "введите координаты C" << endl;
    cin >> x2 >> y2;

    AB = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    AC = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));

    if (AB < AC) {
        cout << "Ближе точка В" << endl;
        cout << "Расстояне до точки А = " << AB << endl;
    }
    else {
        cout << "Ближе точка C" << endl;
        cout << "Расстояне до точки А = " << AC << endl;
    }
    return 0;
}