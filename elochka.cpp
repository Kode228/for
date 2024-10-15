#include <iostream>

using namespace std;

int main() {
    int height;
    setlocale(LC_ALL, "Russian");


    cout << "Введите высоту елки: ";
    cin >> height;

    // Верхняя часть елки
    for (int i = 1; i <= height; ++i) {
        // Пробелы для создания отступа
        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }
        // Звездочки для елки
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl; // Переход на новую строку
    }

   

    return 0;
}
