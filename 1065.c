#include <stdio.h>

int main() {
    int num, even = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
    }
    printf("%d valores pares\n", even);
    return 0;
}

