#include <stdio.h>

int main(void) {
    double weight, height, bmi;

    printf("�п�J�魫�]����^�G");
    scanf_s("%lf", &weight);
    printf("�п�J�����]���ء^�G");
    scanf_s("%lf", &height);

    bmi = weight / (height * height);

    printf("\n�z�� BMI = %.2f\n", bmi);

    printf("\nBMI �зǤ����G\n");
    printf("�C�� 18.5\tUnderweight�]�L���^\n");
    printf("18.5~24.9\tNormal�]���`�^\n");
    printf("25~29.9\t\tOverweight�]�L���^\n");
    printf("30 �H�W\t\tObese�]�έD�^\n\n");

    // �P�_����
    if (bmi < 18.5)
        printf("�� �z���魫���A�GUnderweight�]�L���^\n");
    else if (bmi < 25)
        printf("�� �z���魫���A�GNormal�]���`�^\n");
    else if (bmi < 30)
        printf("�� �z���魫���A�GOverweight�]�L���^\n");
    else
        printf("�� �z���魫���A�GObese�]�έD�^\n");

    return 0;
}
