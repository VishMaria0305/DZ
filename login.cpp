
#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "ru");
    std::string correctLogin = "admin";
    std::string correctPassword = "1234";
    int userPassword, userLogin;

    std::cout << "Логин: " << correctLogin << std::endl;
    std::cout << "Пароль:" << correctPassword << std::endl;

    if (userLogin == correctLogin && userPassword == correctPassword) {

        std::cout << " Доступ разрешен";
    }

    else
    {
        std::cout << "Доступ запрещен" << std::endl;

    }

    return 0;
}