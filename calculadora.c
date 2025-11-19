#include<stdio.h>

int opera, num1, num2, resu, resu1, a, b ;
int suma();
int resta();
int multiplicacion();
int division();
int potencia();
int factorial();
int MCD();
int MCM();

int mai()
{
   
    printf("\n Ingresa el numero de la operacion que desea hacer");
    printf("\n 1-Suma");
    printf("\n 2-Resta");
    printf("\n 3-Multiplicacion");
    printf("\n 4-Division");
    printf("\n 5-Potencia");
    printf("\n 6-Factorial");
    printf("\n 7-Maximo Comun Divisor");
    printf("\n 8-Maximo Comun Multiplo");
    printf("\n Escribe el numero de la operación: ");
    scanf("%d", &opera);

    if(opera==1)
    {
        suma();
    }
    if(opera==2)
    {
        resta();
    }
    if(opera==3)
    {
        multiplicacion();
    }
    if(opera==4)
    {
        division();
    }
    if(opera==5)
    {
        potencia();
    }
    if(opera==6)
    {
        factorial();
    }
    if(opera==7)
    {
        MCD();
    }
    if(opera==8)
    {
        MCM();
    }
    if(opera>=9)
    {
        printf("\n La operacion numero %d no es valida", opera);
    }
}

int suma()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    resu = num1 + num2;
    printf("\n El resultado de la suma es: %d + %d = %d", num1, num2, resu);
    return resu;
}
int resta()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    resu = num1 - num2;
    printf("\n El resultado de la resta es: %d - %d = %d", num1, num2, resu);
    return resu;
}
int multiplicacion()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    resu = num1 * num2;
    printf("\n El resultado de la multiplicacion es: %d * %d = %d", num1, num2, resu);
    return resu;
}
int division()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    resu = num1 / num2;
    printf("\n El resultado de la division es: %d / %d = %d", num1, num2, resu);
    return resu;
}
int potencia()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    int x = num1;
    for(int y=2; y<=num2; y++)
    {
        x *= num1;
        //x = resu;
    }
    printf("\n El resultado de la potencia es: %d ^ %d = %d", num1, num2, x);
    return x;
}
int factorial()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    int a = num1;
    for(int i=num1 - 1; i>=1; i--)
    {
        a *= i;
        //a = fac;
    }
    printf("\n El factorial de %d es: %d",num1, a);
    return a;
}
int MCD()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    if(num1!=num2)
    {
        for(int i=0;num1!=num2;i++)
        {
            if(num1<num2)
            {
                num2 -= num1;
                //printf("%d", num2);
            }
            if(num1>num2)
            {
                num1 -= num2;
                //printf("%d", num1);
            }
        }
        printf("\n El maximo comun divisor es: %d", num1);
    }
    else
    {
        printf("\n Los valoes son iguales");
    }
    return 0;
}
int MCM()
{
    printf("\n Escribe el primer valor : ");
    scanf("%d", &num1);
    printf("\n Escribe el segundo valor : ");
    scanf("%d", &num2);
    a = num1;
    b = num2;
    if(num1!=num2)
    {
        for(int i=0;num1!=num2;i++)
        {
            if(num1<num2)
            {
                num2 -= num1;
                //printf("%d", num2);
            }
            if(num1>num2)
            {
                num1 -= num2;
                //printf("%d", num1);
            }
        }
        int mcm = a*b;
        resu = mcm/num1;
        printf("\n El maximo comun divisor es: %d", resu);
       
    }
    else
    {
        printf("\n Los valores son iguales");
    }
    return 0;
}