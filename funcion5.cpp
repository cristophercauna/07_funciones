#include<iostream>
using namespace std;
void numenteroperfct(int N);
int main(){
    int n;
    cout<<"ingrese el numero : "; cin>>n;
    if(n>0){
        numenteroperfct(n);
    }else{
        cout<<"ingrese un numero positivo"<<endl;
    }
    return 0;
}
void numenteroperfct (int N){
    int i,suma;
    suma=0;
    cout<<"Divisores propios de "<< N << " son: ";
    for(i=1;i<N;i++){
        if(N%i==0){
            cout<<i<<" "<<endl;
            suma=suma+i;
        }
    }
    if(suma==N){
        cout<<"El numero "<<N<<" Es un numero perfecto"<<endl;
    }
    else{
        cout<<"El numero "<<N<<"NO es un numero perfecto"<<endl;
    }
}
