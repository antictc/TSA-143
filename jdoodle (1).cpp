#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Функция для вычисления 'a'
double calculateA(double x, double y, double z) {
    double numerator = 2 * pow(z, x);
    double denominator = sqrt(pow(y, x) * pow(cos(x + y), 2)) - 3 * z;

    if (denominator == 0) {
        cout << "Ошибка: Деление на ноль при вычислении 'a'." << endl;
        return NAN;
    }

    return numerator / denominator;
}

// Функция для вычисления 'b'
double calculateB(double x, double y, double z) {
    return x * exp(sqrt(z)) * cos(pow(x, 2) / (y * z));
}

int main() {
    // Исходные данные (константы)
    double x = 0.78;
    double y = 1.24;
    double z = 0.5;

    // Вычисление результатов
    double a = calculateA(x, y, z);
    double b = calculateB(x, y, z);

    // Вывод результатов
    cout << fixed << setprecision(6);

    cout << "Исходные данные:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << "\nРезультаты вычислений:" << endl;
    if (isnan(a)) {
        cout << "a = Ошибка (деление на ноль)" << endl;
    } else {
        cout << "a = " << a << endl;
    }
    cout << "b = " << b << endl;

    return 0;
}