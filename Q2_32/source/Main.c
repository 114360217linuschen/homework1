#include <stdio.h>

int main(void) {
    double weight, height, bmi;

    printf("請輸入體重（公斤）：");
    scanf_s("%lf", &weight);
    printf("請輸入身高（公尺）：");
    scanf_s("%lf", &height);

    bmi = weight / (height * height);

    printf("\n您的 BMI = %.2f\n", bmi);

    printf("\nBMI 標準分類：\n");
    printf("低於 18.5\tUnderweight（過輕）\n");
    printf("18.5~24.9\tNormal（正常）\n");
    printf("25~29.9\t\tOverweight（過重）\n");
    printf("30 以上\t\tObese（肥胖）\n\n");

    // 判斷分類
    if (bmi < 18.5)
        printf("→ 您的體重狀態：Underweight（過輕）\n");
    else if (bmi < 25)
        printf("→ 您的體重狀態：Normal（正常）\n");
    else if (bmi < 30)
        printf("→ 您的體重狀態：Overweight（過重）\n");
    else
        printf("→ 您的體重狀態：Obese（肥胖）\n");

    return 0;
}
