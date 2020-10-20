// Laba.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /*4. Реалізувати переведення числа з системи числення з основою m<10 у десяткову.*/
    setlocale(LC_ALL, "Russian");
    int m, x, y = 0, res = 0;
    cout << "Введите целое число: " << endl;
    cin >> x;
    cout << "Введите основание системы счисления m<10:" << endl;
    cin >> m;
    if (m < 10)
    {
        while (x > 0)
        {
            res += (x % 10) * pow(m, y);
            x = x / 10;
            y++;
        }
        cout << res;
    }
    else
    {
        cout << "Число введено неверно! " << endl;
    }
    return 0;
}

