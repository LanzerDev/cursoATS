#include<iostream>

using namespace std;

int main(){
    
    int arr[5] = {5,2,3,10};
    int may = 0;
    int suma = 0;
    for (int i = 0; i < 4; i++)
    {
        suma += arr[i];

        if(arr[i] > may){
            may = arr[i];
        }
    }
    if(may == suma - may){
        cout<<"El numero: "<<may<<" es igual a la suma del resto de los elementos del array"<<endl;
    } else {
        cout<<"No hay ningun numero que sea la suma de los otros numeros del array";
    }
    

    return 0; 
}