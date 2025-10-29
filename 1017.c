#include <stdio.h>

int main() {
    int time, speed;
    scanf("%d %d", &time, &speed);
    double distance = time * speed;
    double fuel = distance / 12.0;
    printf("%.3lf\n", fuel);
    return 0;
}

