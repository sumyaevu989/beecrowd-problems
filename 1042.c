#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a, y = b, z = c, temp;

    // simple sorting (ascending)
    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (x > y) { temp = x; x = y; y = temp; }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

