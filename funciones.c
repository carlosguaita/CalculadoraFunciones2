#include <stdio.h>
#include "funciones.h"

void menu(int opcion, float n, float m){
    float result;
    switch (opcion)
    {
    case 1:
        result=suma(n,m);
        printf("La suma es: %.2f\n",result);
        break;
    case 2:
        result=resta(n,m);
        printf("La resta es: %.2f\n",result);
        break;
    case 3:
        result=multiplicacion(n,m);
        printf("La multiplicacion es: %.2f\n",result);
        break;
    case 4:
        result=division(n,m);
        printf("La division es: %.2f\n",result);
        break;
    default:
        printf("No existe la opcion\n");
        break;
    }
}

float leerNumero(int num){
    float x;
    printf("Ingrese el numero %d: ",num);
    scanf("%f",&x);
    return x;
}

float suma(float num1, float num2){
    float s = num1+num2;
    return s;
}

float resta(float num1, float num2){
    float r = num1-num2;
    return r;
}

float multiplicacion(float num1, float num2){
    float m = num1*num2;
    return m;
}

float division(float num1, float num2){
    float m=0;
    if(num2!=0){
        m = num1/num2; 
    }else{
        printf("No se puede dividir para 0\n");
    }
    return m;
}