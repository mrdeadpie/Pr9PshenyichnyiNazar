#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    if (x == y) {
        // Якщо числа однакові, не потрібно робити жодного кроку
        return 0;
    } else if (y - x == 1 || y - x == -1) {
        // Якщо різниця між числами дорівнює 1, потрібно зробити 1 крок
        return 1;
    } else if (y - x == 2 || y - x == -2) {
        // Якщо різниця між числами дорівнює 2, потрібно зробити 2 кроки
        return 2;
    } else {
        // Використовуємо рекурсію для обчислення кількості кроків
        int nextStep = abs(y - x) - 1;
        return 1 + minSteps(x, x + nextStep);
    }
}

int main() {
    int x, y;
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}

