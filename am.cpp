#include <iostream>
#include <clocale> 

int main() {
    std::setlocale(LC_ALL, "Russian");
    const int size = 10;
    int carPrices[size] = {10, 20, 20, 15, 10, 45, 25, 15, 23, 8};

    int maxPrice = carPrices[0]; //максимум
    int perv = 1; // 1 ам
    int posl = 1; // посл ам

    for (int i = 0; i < 10; i++) { //проверяем каждую ам
        if (carPrices[i] > maxPrice) { //ам дороже текущешго максимума
            maxPrice = carPrices[i];
            perv = i + 1;
            posl = i + 1;
        }
        
        else if (carPrices[i] == maxPrice) { //ам с такой же ценой
            posl = i + 1; //номер посл ам
        }
    }

    std::cout << "Макс. цена АМ: " << maxPrice << std::endl;
    std::cout << "Номер 1-го АМ: " << perv << std::endl;
    std::cout << "Номер посл. АМ: " << posl << std::endl;

    return 0;
}
