/*Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
#include <stdio.h>

void suma(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        printf("La suma de %d y %d es %d\n", a, b, a + b);
    } else {
        printf("Ambos valores deben ser pares para poder sumarlos\n");
    }
}
//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo contrario imprimirá que no son impares
#include <stdio.h>

void resta(int a, int b) {
    if (a % 5 == 0 && b % 5 == 0) {
        printf("La resta de %d y %d es %d\n", a, b, a - b);
    } else {
        printf("Ambos valores deben ser múltiplos de 5 para poder restarlos\n");
    }
}
//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo contrario imprimirá que no es una división exacta
#include <stdio.h>

void division(int a, int b) {
    if (a % b == 0) {
        printf("La división de %d y %d es %d\n", a, b, a / b);
    } else {
        printf("La división de %d y %d no es exacta\n", a, b);
    }
}
//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
#include <stdio.h>

void multiplicacion(int a, int b) {
    if (a > 10 && b > 10) {
        printf("La multiplicación de %d y %d es %d\n", a, b, a * b);
    } else {
        printf("Ambos valores deben ser mayores a 10 para poder multiplicarlos\n");
    }
}

//Código
#include <stdio.h>
#include <stdlib.h>

int printMenu(){
    /* printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    */
    /*int option;
    system("clear");
    fflush( stdin );
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Opcion1\n"); printf("\t2)Opcion2\n"); printf("\t3)Opcion3\n"); printf("\t4)Opcion4\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=4){
        flag = printMenu();
        switch (flag){
            case 1:
                printf("\n1");
                break;
            
            case 2:
                printf("\n2");
                break;
            
            case 3:
                printf("\n3");
                break;
            
            case 0:
                printf("\nNo valido");
                break;
            default:
                printf("\nNo valido");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar ");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}

1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
El código crea un menú interactivo que muestra cuatro opciones numeradas del 1 al 4. El usuario puede seleccionar una opción
ingresando su número correspondiente. Luego, se utiliza un switch para ejecutar un código diferente según la opción seleccionada
por el usuario. Si el usuario ingresa un número que no corresponde a ninguna opción, se muestra un mensaje indicando que la opción
no es válida. El bucle while se ejecuta continuamente hasta que el usuario selecciona la opción 4, momento en el que el bucle se
detiene y se imprime "excelente". También se utiliza la función system("clear") para borrar la pantalla antes de mostrar el menú.

 2. ¿Para qué sirve la función fflush?
 Se utiliza para asegurarse de que cualquier entrada de usuario previa se haya eliminado del búfer de entrada. De esta manera, se
 evita que la entrada anterior se use accidentalmente para la entrada actual.

3. ¿Cuál es la sintaxis de un while?
while (condición){
    // código a ejecutar mientras la condición sea verdadera
}
condición es una expresión booleana que se evalúa en cada iteración del bucle.
El bloque de código entre llaves {} es el código que se ejecutará mientras la condición sea verdadera.

 4. ¿Cuál es la sintaxis de un switch?
 switch (expression) {
    case valor1:
        // código para caso valor1
        break;
    case valor2:
        // código para caso valor2
        break;
    case valor3:
        // código para caso valor3
        break;
    default:
        // código para caso por defecto
        break;
}
expression es una expresión que se evalúa y se compara con los valores de los casos.
valor1, valor2, valor3, etc. son los valores posibles que se pueden comparar con la expresión.
break se utiliza para salir del switch después de que se ha ejecutado el código correspondiente al caso.
default se utiliza como caso por defecto, es decir, si ninguno de los valores anteriores coincide con la expresión, se ejecuta el
código correspondiente a este caso.
Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para
preguntar si se deasea volver al menú principal.*/

#include <stdio.h>
#include <stdlib.h>

int printMenu(){
    /* printMenu
    Author: Linares Guzman Ana Paola
    Date: 10 de marzo de 2023
    Description: Descripción de los tipos de datos en C
    */
    int option;
    system("clear");
    fflush( stdin );
    printf("Bienvenido al menu en C\n seleccione una opcion \n\n",163,162);
    printf("\t1) Suma\n");
    printf("\t2) Resta\n");
    printf("\t3) Multiplicacion\n",162);
    printf("\t4) Division\n",162);
    printf("\t5) Salir\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    int num1, num2;
    while(flag!=5){
        flag = printMenu();
        switch (flag){
            case 1:
                printf("\nIngrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                printf("La suma es: %d", num1 + num2);
                break;
            
            case 2:
                printf("\nIngrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                printf("La resta es: %d", num1 - num2);
                break;
            
            case 3:
                printf("\nIngrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                printf("La multiplicacion es: %d", 162, num1 * num2);
                break;
            
            case 4:
                printf("\nIngrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                if(num2 == 0){
                    printf("No es posible dividir entre 0.");
                } else {
                    printf("La division es: %d", 162, num1 / num2);
                }
                break;
                
            case 5:
                printf("\nSaliendo del programa...");
                break;
                
            default:
                printf("\nError\nOpcion no valida.", 162, 160);
                break;
        }
        printf("\nPresione enter para continuar...");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("\nNos vemos, cuidate <3");
}
