#include <stdio.h>

int main() {
    // Lap tu 1 den 100
    for (int i = 1; i <= 100; i++) {
        // Kiem tra boi so cua ca 3 và 5 
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // Kiem tra boi so cua 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // Kiem tra boi so cua 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // Cac so con lai
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}

