#include <stdio.h>

int main() {
    int A, B, C, greatest;
    scanf("%d %d %d", &A, &B, &C);

    greatest = (A + B + abs(A - B)) / 2;
    greatest = (greatest + C + abs(greatest - C)) / 2;

    printf("%d eh o maior\n", greatest);
    return 0;
}

