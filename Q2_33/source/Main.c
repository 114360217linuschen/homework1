#include <stdio.h>

int main(void) {
    double miles_per_day;      // a) �C�Ѧ�p���`���{��
    double cost_per_gallon;    // b) �C�[�ڨT�o������
    double miles_per_gallon;   // c) �����C�[�ڥi��p���^����
    double parking_fees;       // d) �C�Ѱ����O
    double tolls;              // e) �C�ѳq��O
    double total_cost;         // �C��}���`��O
    int carpool_people;        // �@���H��
    double shared_cost;        // �C�H���u���B

    // ��J���
    printf("�п�J�z�@�Ѷ}�����`���{�ơ]�^���^�G");
    scanf_s("%lf", &miles_per_day);

    printf("�п�J�C�[�ڨT�o������]�����^�G");
    scanf_s("%lf", &cost_per_gallon);

    printf("�п�J�����C�[�ڥi��p���^���ơG");
    scanf_s("%lf", &miles_per_gallon);

    printf("�п�J�@�Ѫ������O�]�����^�G");
    scanf_s("%lf", &parking_fees);

    printf("�п�J�@�Ѫ��q��O�]�L���O�^�]�����^�G");
    scanf_s("%lf", &tolls);

    // �p��C���`�}������
    total_cost = (miles_per_day / miles_per_gallon) * cost_per_gallon + parking_fees + tolls;

    // ����`�}����O
    printf("\n�z�C�Ѷ}�����`��O���G$%.2f ����\n", total_cost);

    // �B�~�G��J�@���H�ơA�p����u���B
    printf("\n�Y�ĥΦ@���A�п�J�@���H�ơ]�]�t�ۤv�^�G");
    scanf_s("%d", &carpool_people);

    if (carpool_people > 0)
        shared_cost = total_cost / carpool_people;
    else
        shared_cost = total_cost; // �קK���H 0

    printf("�C�H�����ݭt�᪺�O�ά��G�� $%.2f ����\n", shared_cost);

    return 0;
}

