#include<iostream>
/*Escribe la siguiente expresion matematica como expresion en c++
    a+b/c+d
*/
using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    cout<<"Ingrese c: "; cin>>c;
    cout<<"Ingrese d: "; cin>>d;

    resultado = (a+b)/(c+d);
    
    cout<<"\nResultado: "<<resultado<<endl;

    return 0; 
}