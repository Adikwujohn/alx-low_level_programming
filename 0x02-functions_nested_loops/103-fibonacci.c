#include <stdio.h>

int main() {
    int a = 1, b = 2, sum = 0;

    while (b <= 4000000) {
        if (b % 2 == 0) {  
            sum += b; 
        }
        int next = a + b;
        a = b;
        b = next;
    }

    printf("%d\n", sum); // Printing the sum of even Fibonacci terms
    return 0;
}
