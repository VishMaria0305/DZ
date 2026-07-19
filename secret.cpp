#include <random>
#include <iostream>
#include <chrono>

int main() {
    setlocale(LC_ALL, "ru");
    // Просто важная штука
    int i = 0; //счетчик
    std::mt19937 gen(static_cast<unsigned>(std::chrono::steady_clock::now().time_since_epoch().count()));
    // Указываем диапазон (1..100 - включительно)
    std::uniform_int_distribution<int> dist(1, 100);
    // Записываес в переменную псевдослучайное число
    unsigned const secret = dist(gen);
    // std::cout << secret << std::endl;
    int user_input = 0;
    std::cout << "Угадайте число, которое загадал компьютер!\n";
    do {
        std::cout << "Ваш выбор: "; std::cin >> user_input;
        i++;
        if (user_input > secret)
            std::cout << "Загаданное число меньше! Попробуйте ещё! ";
        else if (user_input < secret)
            std::cout << "Загаданное число больше! Попробуйте ещё! ";
        else
            std::cout << "Вы угадали за " << i<< " попыток\n";
    } while (user_input != secret && i < 10);

    return 0;
}