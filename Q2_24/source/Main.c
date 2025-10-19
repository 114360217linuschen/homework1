#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf_s("%d", &number);   // 使用 scanf_s，不會再出現警告

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}
