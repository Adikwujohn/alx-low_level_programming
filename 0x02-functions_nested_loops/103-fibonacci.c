#include <stdio.h>

int main() {
    int a = 1, b = 2, sum = 0;
    int next;
    while (b <= 4000000) {
        if (b % 2 == 0) {  
            sum += b; 
        }
        next = a + b;
        a = b;
        b = next;
    }

    printf("%d\n", sum);
    return 0;
}
