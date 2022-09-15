#include<iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, promedio = 0;
    cout<<"Ingrese nota 1: ";cin>>nota1;
    cout<<"Ingrese nota 2: ";cin>>nota2;
    cout<<"Ingrese nota 3: ";cin>>nota3;

    promedio = (nota1 + nota2 + nota3) / 3;
    cout.precision(2);
    cout<<"\nTu promedio es: "<<promedio;
    return 0; 
}

