#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "ru");
    int number;
    std::cout << "Введите номер месяца (1-12) "; std::cin >> number;

    switch (number) {
    case 1:
        std::cout << "Январь\n";
            break;
    case 2:
        std::cout << "Февраль\n";
        break;
    case 3: 
        std::cout << "Март\n";
        break;
    case 4:
        std::cout << "Апрель\n";
        break;
    case 5:
        std::cout << "Май\n";
        break;
    case 6:
        std::cout << "Июнь\n";
        break;
    case 7:
        std::cout << "Июль\n";
        break;
    case 8:
        std::cout << "Август\n";
        break;
    case 9:
        std::cout << "Сентябрь\n";
        break;
    case 10:
        std::cout << "Октябрь\n";
        break;
    case 11:
        std::cout << "Ноябрь\n";
        break;
    case 12:
        std::cout << "Декабрь\n";
        break;
    default:
        std::cout << "Неверный номер месяца\n";

    }

    return 0;
}


