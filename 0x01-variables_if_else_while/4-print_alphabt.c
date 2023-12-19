#include <stdio.h>

int main() {
    char c;

    for (c = 'a'; c <= 'z'; ++c) {
        if (c != 'q' && c != 'e') {
            putchar(c);
        }
    }

    putchar('\n');

    return 0;
}
