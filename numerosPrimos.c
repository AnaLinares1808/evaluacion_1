#include <stdio.h>

int main() {
    int i, j;
    int primo;

    printf("Los números primos del 1 al 50 son: ");
    for (i = 2; i <= 50; i++) {
        primo = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
