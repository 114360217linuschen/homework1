#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf_s("%d", &number);   // �ϥ� scanf_s�A���|�A�X�{ĵ�i

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}
