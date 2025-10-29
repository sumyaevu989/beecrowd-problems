#include <stdio.h>

int main() {
    int number, hours;
    double salary_per_hour, SALARY;

    scanf("%d %d %lf", &number, &hours, &salary_per_hour);
    SALARY = hours * salary_per_hour;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", SALARY);

    return 0;
}

