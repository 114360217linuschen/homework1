#include <stdio.h>

int main(void) {
    double miles_per_day;      // a) 每天行駛的總里程數
    double cost_per_gallon;    // b) 每加侖汽油的價格
    double miles_per_gallon;   // c) 平均每加侖可行駛的英里數
    double parking_fees;       // d) 每天停車費
    double tolls;              // e) 每天通行費
    double total_cost;         // 每日開車總花費
    int carpool_people;        // 共乘人數
    double shared_cost;        // 每人分攤金額

    // 輸入資料
    printf("請輸入您一天開車的總里程數（英里）：");
    scanf_s("%lf", &miles_per_day);

    printf("請輸入每加侖汽油的價格（美元）：");
    scanf_s("%lf", &cost_per_gallon);

    printf("請輸入平均每加侖可行駛的英里數：");
    scanf_s("%lf", &miles_per_gallon);

    printf("請輸入一天的停車費（美元）：");
    scanf_s("%lf", &parking_fees);

    printf("請輸入一天的通行費（過路費）（美元）：");
    scanf_s("%lf", &tolls);

    // 計算每日總開車成本
    total_cost = (miles_per_day / miles_per_gallon) * cost_per_gallon + parking_fees + tolls;

    // 顯示總開車花費
    printf("\n您每天開車的總花費為：$%.2f 美元\n", total_cost);

    // 額外：輸入共乘人數，計算分攤金額
    printf("\n若採用共乘，請輸入共乘人數（包含自己）：");
    scanf_s("%d", &carpool_people);

    if (carpool_people > 0)
        shared_cost = total_cost / carpool_people;
    else
        shared_cost = total_cost; // 避免除以 0

    printf("每人平均需負擔的費用為：約 $%.2f 美元\n", shared_cost);

    return 0;
}

