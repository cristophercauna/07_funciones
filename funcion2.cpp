#include<iostream>
using namespace std;
int verificar(int val);
int main(){
    int a;
    cout<<"Ingrese el numero a verificar si es primo"; cin>>a;
    if(verificar(a)==1){
        cout<<"El numero es primo"<<endl;
    }else{
        cout<<"El numero NO es primo"<<endl;
    }
    return 0;
}
int verificar(int val){
    int contador,i;
    contador=0;
    for(i=1 ; i<=val ; i++){
        if(val%i==0){
            contador=contador+1;
        }
    }
    cout << "\nCantidad de divisores: " << contador << endl;
    
    if(contador==2){
        return 1;
    }
    else{
        return 0;
    }
}