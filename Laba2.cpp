// Laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*20. Число є паліндромом, якщо воно читається однаково і зліва направо і справа наліво. Знайти
всі числа – паліндроми, менші за N.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std; 
bool isPalindrom ( int n )
{
    bool f = true;
    vector <int>a(0);
    while (n != 0)
    {
        a.push_back(n % 10);
        n /= 10;
        for (int i = 0; i < a.size(); i++) 
        {
            if (a[i] != a[a.size() - 1 - i])
            {
                f = false;
                break;
            }
        }
    }
        return f;
    }
int main()
{
    setlocale(LC_ALL, "Russian");
    int N, Palindrom;
    cout << "Введите предел для палиндрома:";
    cin >> N;
    for (int n = 1; n <= N; n++)
    {
        Palindrom = isPalindrom(N);
        if (Palindrom == isPalindrom(n));
        {
        cout << "isPalindrom-" << n << endl;
        }
    }
    return 0;
}