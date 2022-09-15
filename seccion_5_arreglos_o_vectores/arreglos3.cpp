#include<iostream>

using namespace std;

int main(){
    int arr[100], n;

    cout<<"Ingrese la cantidad de numeros que tendra el arreglo: ";
    cin>>n;


    for (int i = 0; i < n; i++)
    {
        int usr_num = 0;
        cout<<"Ingrese el numero de la posicion ["<<i<<"]: ";cin>>usr_num;
        arr[i] = usr_num;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<"El array en la posicion "<<i<<" es igual a: "<<arr[i]<<endl;
    }
    

    return 0; 
}