#include <stdio.h>

int main() {
    int altura;

    printf("Ingresa la altura del árbol que quieres imprimir: ");
    scanf("%d", &altura);

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            printf(" "); // Aqui imprime los espacios en blanco antes de los asteriscos que el usuario solicite
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*"); // Aqui imprime los asteriscos de la parte superior del árbol
        }
        printf("\n");
    }
    for (int i = 1; i <= altura / 3; i++) {   // Aqui imprime el tronco del árbol ideal para el tamaño que solicite el usuario
        for (int j = 1; j <= altura - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
