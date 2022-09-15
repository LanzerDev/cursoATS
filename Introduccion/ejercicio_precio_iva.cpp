#include<iostream>

using namespace std;

int main(){

    float precio, precio_iva;

    cout<<"Ingrese el precio de un producto para saber su precio CON iva: "; cin>>precio;
    precio_iva = (precio * 0.16) + precio;
    cout<<"El precio con iva es: "<<precio_iva<<endl;

    return 0;
}