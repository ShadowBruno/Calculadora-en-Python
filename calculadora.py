opera = 0
num1 = 0
num2 = 0
resu = 0
a = 0
b = 0



def suma():
    global num1, num2, resu
    num1 = float(input("Ingrese el primer número: "))
    num2 = float(input("Ingrese el segundo número: "))
    resu = num1 + num2
    print("El resultado de la suma es:", resu)
def resta():
    global num1, num2, resu
    print("Escribe el primer valor: ")
    num1 = float(input())
    print("Escribe el segundo valor: ")
    num2 = float(input())
    resu = num1 - num2
    print("El resultado de la resta es: ", resu)
def multiplicacion():
    global num1, num2, resu
    print("Escribe el primer valor:")
    num1 = float(input())
    print("EScribe el segundo valor:")
    num2 = float (input())
    resu = num1 * num2
    print("El resultado de la multiplicacion es: ", resu)
def division():
    global num1, num2, resu
    print("Escribe el primer valor:")
    num1 = float(input())
    print("Escribe el segundo valor:")
    num2 = float(input())
    if num2 != 0:
        resu = num1/num2
        print("El resultado de la division es: ", resu)
    else:
        print("No es posible dividir entre cero")
def potencia():
    global num1, num2, resu
    print("Escribe que numero quieres elevar:")
    num1 = float(input())
    print("Escribe a que potencia lo quieres elevar:")
    num2 = float(input())
    resu = num1 ** num2
    print("El resultado de la potencia es: ", resu)
def factorial():
    global num1, num2, resu
    print("Escrbe el numero al que le quieres sacar el factorial:")
    num1 = int(input())
    resu = 1
    if num1 < 0:
        print("No es posible sacar el factorial de un numero negativo")
    else:
        for i in range(1, num1 + 1):
            resu = resu * i
        print("El factorial de ", num1, "es: ", resu)

def menu():
    print("Seleccione la operación que desea realizar:")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    print("5. Potencia")
    print("6. Factorial")
    global opera
    opera = int(input())
    




    if opera == 1:
        suma()
    if opera == 2:
        resta()
    if opera == 3:
        multiplicacion()
    if opera == 4:
        division()
    if opera == 5:
        potencia()
    if opera == 6:
        factorial()
    if opera >= 7:
        print("Operación no válida")


print("Bienvenido a la calculadora")
menu()