#include <iostream>

int main() {
    // Оголошення змінних для трьох цілих чисел
    int A, B, C;

    // Введення значень для A, B і C
    std::cout << "Введіть три цілих числа через пробіл: ";
    std::cin >> A >> B >> C;

    // Логічна перевірка
    bool exactlyTwoPositives = (A > 0 && B > 0 && C <= 0) || (A > 0 && C > 0 && B <= 0) || (B > 0 && C > 0 && A <= 0);

    // Виведення результату
    if (exactlyTwoPositives) {
        std::cout << "Істинно: Рівно два з чисел є додатніми." << std::endl;
    } else {
        std::cout << "Не істинно: Умова не виконана." << std::endl;
    }

    return 0;
}