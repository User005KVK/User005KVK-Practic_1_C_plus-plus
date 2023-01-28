#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    char operation;
input:
    while (true) {
        cout << "Выберите арифметическое действие: \n - Сложение (введите 1)\n - Вычитание (введите 2)\n - Умножение (введите 3)\n - Деление (введите 4)\n - Остаток от деления (введите 5)\n - Фибонначи (введите 6)\n - Выход (введите 7)\n";
        cin >> operation;
        switch (operation) {
        case '1':
            cout << "Введите 1 число: ";
            cin >> a;
            cout << "Введите 2 число: ";
            cin >> b;
            cout << "a + b = " << a + b << '\n';
            system("pause");
            system("cls");
            break;
        case '2':
            cout << "Введите 1 число: ";
            cin >> a;
            cout << "Введите 2 число: ";
            cin >> b;
            cout << "a - b = " << a - b << '\n';
            system("pause");
            system("cls");
            break;
        case '3':
            cout << "Введите 1 число: ";
            cin >> a;
            cout << "Введите 2 число: ";
            cin >> b;
            cout << "a * b = " << a * b << '\n';
            system("pause");
            system("cls");
            break;
        case '4':
            cout << "Введите 1 число: ";
            cin >> a;
            cout << "Введите 2 число: ";
            cin >> b;
            if (b == 0) {
                cout << "Нельзя делить на 0\n";
            }
            else {
                cout << "a / b = " << a / b << '\n';
            }
            system("pause");
            system("cls");
            break;
        case '5':
            cout << "Введите 1 число: ";
            cin >> a;
            cout << "Введите 2 число: ";
            cin >> b;
            if (b == 0) {
                cout << "Нельзя делить на 0\n";
            }
            else {
                cout << "Остаток = " << a % b << '\n';
            }
            system("pause");
            system("cls");
            break;
        case '6':
        {
            cout << "Введите количество иттераций: \n";
            int n; cin >> n;
            int sum = 0, fib = 0, fib1 = 1;
            cout << "0, ";
            for (int i = 0; i < n; i++)
            {
                fib += fib1;
                fib1 = fib - fib1;
                cout << fib << ", ";
                sum += fib;

            }
            cout << endl << "Сумма = " << sum << '\n';

        }
        system("pause");
        system("cls");
        break;
        case '7':
            system("cls");
            exit(0);
        default:
            printf("Не правильный выбор, повтори ещё раз\n");
            goto input;
        }
    }
    return 0;
}