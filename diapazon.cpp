
#include <iostream>


int main() {
    setlocale(LC_ALL, "ru");
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
    if (number >= 10 && number <= 50) {
        std::cout << "В диапазоне  " << number;
    }

    else
    {
        std::cout << "Вне диапозона " << number << std::endl;

    }

    return 0;
}