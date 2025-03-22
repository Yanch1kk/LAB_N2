#include <stdio.h>

int main() {
    int num1, num2;
    
    // Введення даних з клавіатури
    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);
    
    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);
    
    // Обчислення
    int remainder = num1 % num2; // залишок від ділення
    int difference = num2 - num1; // різниця 2-го і 1-го
    int sum = num1 + num2; // сума чисел
    
    // Виведення результатів
    printf("\nРезультати обчислень:\n");
    printf("Залишок від ділення %d на %d: %d\n", num1, num2, remainder);
    printf("Різниця %d - %d: %d\n", num2, num1, difference);
    printf("Сума чисел %d + %d: %d\n", num1, num2, sum);
    
    return 0;
}
