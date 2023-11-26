#include <iostream>
#include <cmath>

// Процедура для обчислення другої, третьої і четвертої ступенів числа A
void PowerA234(double A, double& B, double& C, double& D) {
    B = std::pow(A, 2);   // Другий ступінь
    C = std::pow(A, 3);   // Третій ступінь
    D = std::pow(A, 4);   // Четвертий ступінь
}

int main() {
    // Оголошення змінних для вхідних та вихідних параметрів
    double inputNumber, resultB, resultC, resultD;

    // Введення п'яти чисел
    for (int i = 0; i < 5; ++i) {
        std::cout << "Введіть число " << i + 1 << ": ";
        std::cin >> inputNumber;

        // Виклик процедури PowerA234
        PowerA234(inputNumber, resultB, resultC, resultD);

        // Виведення результатів
        std::cout << "Другий ступінь: " << resultB << std::endl;
        std::cout << "Третій ступінь: " << resultC << std::endl;
        std::cout << "Четвертий ступінь: " << resultD << std::endl;
    }

    return 0;
}