/*
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
def suma(a, b):
    if a % 2 == 0 and b % 2 == 0:
        print(a + b)
    else:
        print("Los valores no son pares")
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
def resta(a, b):
    if a % 5 == 0 and b % 5 == 0:
        print(a - b)
    else:
        print("Los valores no son múltiplos de 5")
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
def division(a, b):
    if a % b == 0:
        print(a / b)
    else:
        print("La división no es exacta")
#Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
def multiplicacion(a, b):
    if a > 10 and b > 10:
        print(a * b)
    else:
        print("Los valores no son mayores a 10")
Código:
import os
def printMenu():
    ''' printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)Opcion1\n")
    print("\t2)Opcion2\n")
    print("\t3)Opcion3\n")
    print("\t4)Opcion4\n")
    option = input()
    if(option):
        return int (option)
    else:
        return 0


def main():
    flag = 0
    inutil =''
    while(flag!=4):
        flag = printMenu()
        
        if (flag==1):
            print("\n1")
        elif (flag==2):
            print("\n2")
        elif (flag==3):
            print("\n3")
        elif (flag==0):
            print("\nNo valido")
        else:
            print("\nNo valido")

        print("\nOprima enter tecla cualquiera para continuar ")
        input(inutil)
    print("excelente")

if __name__ == "__main__":
    main()

#      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
Es un menú de que le muestra al usuario cuatro opciones y le permite seleccionar una de ellas. Cada opción
imprime un número en la pantalla. Después de que se ha seleccionado una opción, el programa espera a que
el usuario presione cualquier tecla antes de mostrar nuevamente el menú.
#      2. ¿Cuál es la sintaxis de un while?
while condición:
    bloque de código
"while" es la palabra clave que indica que se está definiendo un ciclo while.
"condición" es una expresión que se evalúa en cada iteración del ciclo. Si la expresión es verdadera, se
ejecuta el bloque de código. Si la expresión es falsa, el ciclo termina y el programa continúa con la siguiente
instrucción después del bloque del ciclo.
"bloque de código" es el conjunto de instrucciones que se ejecutan mientras la condición sea verdadera. El
bloque de código debe estar indentado con cuatro espacios (o un tab) para indicar que forma parte del ciclo while.
#      3. ¿Exite swhitch en python?
No, en su lugar, se pueden utilizar varias construcciones de Python para lograr resultados similares con if else.
#      4. ¿Qué es un elif?
Es una encadenador de Python que se utiliza en las declaraciones if para evaluar múltiples condiciones en secuencia.
#      5. ¿Qué función de se ejecuta al correr el script?
La función que se ejecuta al correr el script es main(). Esto se debe a que el condicional if __name__ == "__main__":
evalúa si el archivo se está ejecutando directamente desde la línea de comandos y, en ese caso, llama a la función main().
#Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un
mecanismo para preguntar si se deasea volver al menú principal. */
import os

def printMenu():
    ''' printMenu
    Author: Linares Guzman Ana Paola
    Date: 10 de marzo de 2023
    Description: Descripción de los tipos de datos en python
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opción \n\n")
    print("\t1)Suma\n")
    print("\t2)Resta\n")
    print("\t3)Multiplicacion\n")
    print("\t4)Division\n")
    print("\t5)Salir\n")
    option = input()
    if(option):
        return int(option)
    else:
        return 0

def suma():
    num1 = int(input("Introduce el primer numero: "))
    num2 = int(input("Introduce el segundo numero: "))
    if num1 % 2 == 0 and num2 % 2 == 0:
        print("La suma es:", num1 + num2)
    else:
        print("Al menos uno de los numeros no es par.")

def resta():
    num1 = int(input("Introduce el primer numero: "))
    num2 = int(input("Introduce el segundo numero: "))
    if num1 % 5 == 0 and num2 % 5 == 0:
        print("La resta es:", num1 - num2)
    else:
        print("Al menos uno de los numeros no es múltiplo de 5.")

def multiplicacion():
    num1 = int(input("Introduce el primer numero: "))
    num2 = int(input("Introduce el segundo numero: "))
    if num1 > 10 and num2 > 10:
        print("La multiplicacion es:", num1 * num2)
    else:
        print("Al menos uno de los numeros no es mayor a 10.")

def division():
    num1 = int(input("Introduce el primer numero: "))
    num2 = int(input("Introduce el segundo numero: "))
    if num2 != 0 and num1 % num2 == 0:
        print("La division es:", num1 / num2)
    else:
        print("La division no es exacta.")

def main():
    flag = 0
    while(flag!=5):
        flag = printMenu()
        
        if flag == 1:
            suma()
        elif flag == 2:
            resta()
        elif flag == 3:
            multiplicacion()
        elif flag == 4:
            division()
        elif flag == 5:
            break
        else:
            print("\nNo valido")

        print("\nOprima cualquier tecla para continuar ")
        input()

    print("Excelente :D")

if __name__ == "__main__":
    main()
