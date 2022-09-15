#include<iostream>

using namespace std;

int main(){
    
    int arr[5] = {5,2,3};

    for (int i = 0; i < 3; i++)
    {
        if(arr[i] == arr[i+1] + arr[i+2]){
            cout<<"El array tiene un numero que equivale a la suma del resto del array";
        }
    }
    

    return 0; 
}