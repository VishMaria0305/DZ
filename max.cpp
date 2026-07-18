
#include <iostream>


int main() {
    setlocale(LC_ALL, "ru");
    int a, b;
    std::cout << "Введите числа: ";
    std::cin >> a >> b;
    if (a > b) {
        std::cout << "Большее число: a " << a;
    }
    else if (b > a) {
        std::cout << "Большее число: b " << b;
    }
    else {
        std::cout << "Числа равны \n";
    }


  

    return 0;
}