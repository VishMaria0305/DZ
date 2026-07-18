
#include <iostream>


int main() {
    setlocale(LC_ALL, "ru");
    char svetofor;
    std::cout << "Введите цвет светофора (r, y, g) ";
    std::cin >> svetofor;
    switch (svetofor) {
    case 'r':
        std::cout << "Стоп!" << 'r';
        break;
    case 'y':
        std::cout << "Приготовьтесь!" << 'y';
        break;
    case 'g':
        std::cout << "Поехали" << 'g';
        break;
    default:
        std::cout << "Светофор сломался!!!";

    }

    return 0;
}