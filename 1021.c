#include <stdio.h>
#include <math.h>

int main() {
    double N;
    scanf("%lf", &N);

    int value = (int)round(N * 100);

    int notes[6] = {10000, 5000, 2000, 1000, 500, 200};
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = value / notes[i];
        printf("%d nota(s) de R$ %.2f\n", count, notes[i] / 100.0);
        value = value % notes[i];
    }

    int coins[6] = {100, 50, 25, 10, 5, 1};
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = value / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i] / 100.0);
        value = value % coins[i];
    }

    return 0;
}
