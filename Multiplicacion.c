#include <stdio.h>

int main() {
    int numero;

    printf("Bienvenido, ingresa el número de la tabla de multiplicar que quieras imprimir: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
