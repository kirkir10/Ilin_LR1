#include <iostream>
#include <cmath>
using namespace std;

// Объявление функций
void inputNumberX(double &x);
void inputNumberY(double &y);
void inputNumberZ(double &z);
void calculateFractionalSum(double x, double y, double z);
void calculateIntegerSum(double x, double y, double z);

int main() {
    double x = 0.0, y = 0.0, z = 0.0; // Входные числа
    int choice;

    while (true) {
        // Меню приложения
        cout << "\n=== Меню ===" << endl;
        cout << "1. Ввести число x" << endl;
        cout << "2. Ввести число y" << endl;
        cout << "3. Ввести число z" << endl;
        cout << "4. Найти сумму дробных частей чисел" << endl;
        cout << "5. Найти сумму целых частей чисел" << endl;
        cout << "6. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputNumberX(x);
                break;
            case 2:
                inputNumberY(y);
                break;
            case 3:
                inputNumberZ(z);
                break;    
            case 4:
                calculateFractionalSum(x, y, z);
                break;
            case 5:
                calculateIntegerSum(x, y, z);
                break;
            case 6:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    }
}

// Функция для ввода чисел
void inputNumberX(double &x) {
    cout << "Введите число x: ";
    cin >> x;
}
void inputNumberY(double &y) {
    cout << "Введите число y: ";
    cin >> y;
    cout << "Число Y успешно введено." << endl;
}
void inputNumberZ(double &z) {
    cin >> z;
    cout << "Число Z успешно введено." << endl;
}
// Функция для вычисления суммы дробных частей 
void calculateFractionalSum(double x, double y, double z) {
    double fractionalX = x - floor(x);
    double fractionalY = y - floor(y);
    double fractionalZ = z - floor(z);
    double sum = fractionalX + fractionalY + fractionalZ;

    cout << "Сумма дробных частей: " << sum << endl;
}

// Функция для вычисления суммы целых частей 
void calculateIntegerSum(double x, double y, double z) {
    int integerX = static_cast<int>(x);
    int integerY = static_cast<int>(y);
    int integerZ = static_cast<int>(z);
    int sum = integerX + integerY + integerZ;

    cout << "Сумма целых частей: " << sum << endl;
}
