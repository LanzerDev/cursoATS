#include<iostream>

using namespace std;

int main(){
    float a, b, res = 0;

    cout<<"Ingrese el valor de a: ";cin>>a;
    cout<<"Ingrese el valor de b: ";cin>>b;

    res = (a/b) + 1;
    
    cout.precision(2);
    
    cout<<"\nEl resultado es: "<<res<<endl;

    return 0; 
}