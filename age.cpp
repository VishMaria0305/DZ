
#include <iostream>


int main() {
    setlocale(LC_ALL, "ru");
    int x, age;
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    if (age >= 12 ) {
        std::cout << " Доступ разрешен" << age;
    }

    else
    {
        x = 12 - age;
        std::cout << "Доступ запрещен, подрасти еще " << x << " лет " << std::endl;

    }

    return 0;
}