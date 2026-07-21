#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    char znak; 
    while (true) {
    std::cout << "Введите 1е число:\n";
    std::cin >> a;
  
        std::cout << "Введите знак (+, -, *, /, x - макс, n - мин, w - выход)\n";
        std::cin >> znak;
        if (znak == 'w') { //символ для выхода из программы
            std::cout << "Работа программы завершена.\n";
            break;
        }

        std::cout << "Введите 2е число:\n";
        std::cin >> b;

        switch (znak) {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            std::cout << a / b << std::endl;
            break;
        case 'x': // максисум
            if (a > b)
                std::cout << "Макс:\n" << a << std::endl;
            else
                std::cout << "Макс:\n" << b << std::endl;
            break;
        case 'n': // минимум
            if (a < b)
                std::cout << "Мин:\n" << a << std::endl;
            else
                std::cout << "Мин:\n" << b << std::endl;
            break;
        default:
            std::cout << "Неверно\n" << std::endl;
        }
    }
    return 0;
}
