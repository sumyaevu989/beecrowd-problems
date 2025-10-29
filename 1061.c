#include <stdio.h>

int main() {
    int startDay, endDay;
    int sh, sm, ss, eh, em, es;
    int start, end, total, days, hours, minutes, seconds;
    char temp[4];

    scanf("%s %d", temp, &startDay);
    scanf("%d : %d : %d", &sh, &sm, &ss);
    scanf("%s %d", temp, &endDay);
    scanf("%d : %d : %d", &eh, &em, &es);

    start = startDay * 86400 + sh * 3600 + sm * 60 + ss;
    end = endDay * 86400 + eh * 3600 + em * 60 + es;

    total = end - start;

    days = total / 86400; total %= 86400;
    hours = total / 3600; total %= 3600;
    minutes = total / 60; total %= 60;
    seconds = total;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}

