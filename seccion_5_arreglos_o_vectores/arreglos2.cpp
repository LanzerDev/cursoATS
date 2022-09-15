#include<iostream>

using namespace std;

int main(){
    int numeros[3] = {1,2,4};
    int mult = 1;

    for (int i = 0; i < 3; i++)
    {
        mult = mult * numeros[i];
    }
    cout<<"La multiplicacion de los elementos es: "<<mult<<endl;
    return 0; 
}