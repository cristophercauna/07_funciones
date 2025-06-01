#include<iostream>
using namespace std;
void numenteroperfct(int N);
int main(){
    int n;
    cout<<"ingrese el numero : "; cin>>n;
    numenteroperfct(n);
    return 0;
}
void numenteroperfct (int N){
    int i,suma;
    suma=0;
    for(i=1;i<N;i++){
        if(N%i==0){
            suma=suma+i;
        }
    }
    if(suma==N){
        cout<<"El numero si cumple con la regla"<<endl;
    }
    else{
        cout<<"no cumple"<<endl;
    }
}
