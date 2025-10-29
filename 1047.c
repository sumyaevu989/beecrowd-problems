#include <stdio.h>

int main() {
    int sh, sm, eh, em;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);

    int start = sh * 60 + sm;
    int end = eh * 60 + em;

    int duration = end - start;
    if (duration <= 0)
        duration += 24 * 60;

    int hours = duration / 60;
    int minutes = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
    return 0;
}

