#include <stdio.h>

int main() {
    int a = 1, b = 2, count = 0;

    printf("%d, %d, ", a, b);

    while (count < 48) {
        int next = a + b;
        printf("%d", next);

        if (count != 47) {
            printf(", ");
        }

        a = b;
        b = next;
        count++;
    }

    printf("\n");
    return 0;
}
