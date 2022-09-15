#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int arr[5], n;

    cout<<"Ingrese el numero de elementos del array: ";cin>>n;
        cout<<"ingrese "<<n<<" elementos al array"<<endl;

    for (int i = 0; i < n; i++)
    {
        int usr_num;
        cout<<"Elemento "<<i+1<<": ";cin>>usr_num;
        arr[i] = usr_num;
    }
    cout<<"El array tiene los elementos: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    int may = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > may){
            may = arr[i];
        }
    }

    cout<<"El numero mayor del array es: "<<may<<endl;    

    getch();

    return 0; 
}