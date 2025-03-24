#include <stdio.h>

int main() {
    // Задано сталі величини
    int a = 15, b = -2, c = 3;

    // Обчислення чисельника та знаменника
    double numerator = (3 * a - 4 * b + 5 * c) - ((double)(a * b - c) / 4);
    double denominator = a * b + 2 * b * c + 3 * a * c;

    // Обчислення значення функції y
    double y = numerator / denominator;

    // Виведення результату з поясненням
    printf("Обчислення виразу для a=%d, b=%d, c=%d\n", a, b, c);
    printf("Результат: y = %.4f\n", y);


    return 0;
}