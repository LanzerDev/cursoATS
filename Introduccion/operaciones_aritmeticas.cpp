/*Escribe un programa que lea dela entrada estandar, dos numeros y muestre
en la salida estandar su suma, resta, multiplicacion y division*/


#include<iostream>

using namespace std;

int main(){
    int num1, num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    cout<<"Division: "<<division<<endl;

    return 0;
}