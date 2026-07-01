#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Введіть три значення:\n");
    
    if (scanf("%lf %lf %lf", &t1, &t2, &t3) == 3) {
        if (t1 > 0 && t2 > 0 && t3 > 0) {
            double total_time = 1.0 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));
            printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", total_time);
        } else {
            printf("Помилка: значення повинні бути більшими за 0.\n");
        }
    } else {
        printf("Помилка: некоректні дані.\n");
    }
    return 0;
}
