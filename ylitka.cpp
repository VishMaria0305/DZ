#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "ru");
    int sm = 15; //15 см в 1 день
    int n; //задает пользолватель дней
    int sum = 0; //общая сумма пробега
    std::cout << "Введите количество дней: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        sum = sum + sm;
        sm = sm + 2; 
        
        
    
    }
 
    std::cout << "Общее расстояние: " << sum << std::endl;
    return 0;
}