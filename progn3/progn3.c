#include <stdio.h>
#include <math.h>

int main() {
    int a, y, z;
    double x;

    // Введення даних
    printf("Введіть значення a: ");
    scanf("%d", &a);
    printf("Введіть значення y: ");
    scanf("%d", &y);
    printf("Введіть значення z: ");
    scanf("%d", &z);

    // Обчислення
    x = a * sqrt(y * y) - 2 * a + pow(cos(z), 2);

    // Виведення результату
    printf("Результат обчислення x = %.4lf\n", x);

    return 0;
}

    