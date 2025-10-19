#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
    int x, y, z;  // 俱计
    int largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    largest = x;   // 安砞材琌程
    smallest = x;  // 安砞材琌程

    if (y > largest)
        largest = y;
    if (z > largest)
        largest = z;

    if (y < smallest)
        smallest = y;
    if (z < smallest)
        smallest = z;

    printf("Largest is %d\n", largest);
    printf("Smallest is %d\n", smallest);

    return 0;
}
