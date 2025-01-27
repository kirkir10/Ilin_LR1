#include <iostream>
#include <cmath>
using namespace std;

// Объявление функций
void inputNumbers(double &x, double &y, double &z);
void calculateFractionalSum(double x, double y, double z);
void calculateIntegerSum(double x, double y, double z);

int main() {
    double x = 0.0, y = 0.0, z = 0.0; // Входные числа
    int choice;

    while (true) {
        // Меню приложения
        cout << "\n=== Меню ===" << endl;
        cout << "1. Ввести числа x, y, z" << endl;
        cout << "2. Найти сумму дробных частей чисел" << endl;
        cout << "3. Найти сумму целых частей чисел" << endl;
        cout << "4. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите число x: ";
                cin >> x;
                cout << "Введите число y: ";
                cin >> y;
                cout << "Введите число z: ";
                cin >> z;
                break;
            case 2:
                calculateFractionalSum(x, y, z);
                break;
            case 3:
                calculateIntegerSum(x, y, z);
                break;
            case 4:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    }
}

// Функция для ввода чисел
void inputNumbers(double &x, double &y, double &z) {
    // Реализация будет добавлена
    cout << "Функция вычисления суммы дробных частей пока не реализована." << endl;
}

// Функция для вычисления суммы дробных частей (реализация пока пуста)
void calculateFractionalSum(double x, double y, double z) {
    // Реализация будет добавлена
    cout << "Функция вычисления суммы дробных частей пока не реализована." << endl;
}

// Функция для вычисления суммы целых частей (реализация пока пуста)
void calculateIntegerSum(double x, double y, double z) {
    // Реализация будет добавлена
    cout << "Функция вычисления суммы целых частей пока не реализована." << endl;
}
