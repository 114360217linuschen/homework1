#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf_s("%d %d", &a, &b);   // 使用 scanf_s，避免警告

    if (b == 0) {
        printf("Error: division by zero is not allowed.\n");
    }
    else if (a % b == 0) {
        printf("%d is a multiple of %d.\n", a, b);
    }
    else {
        printf("%d is not a multiple of %d.\n", a, b);
    }

    return 0;
}
