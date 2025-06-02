#include<iostream>
using namespace std;
int funcionmcm(int A, int B);
int funcionmcd(int A, int B);
int main(){
    int a,b,MCM,MCD;
    cout<<"ingrese el primer numero: "; cin>>a;
    cout<<"ingrese el segundo numero: "; cin>>b;
    if (a <= 0 || b <= 0) {
        cout << "Error: Ambos numeros deben ser positivos y mayores que cero." << endl;
        return 1; 
    }
    MCD=funcionmcd(a,b);
    MCM=funcionmcm(a,b);

     cout << "El Maximo Comun Divisor (MCD) es: " << MCD << endl;
    cout << "El Minimo Comun Multiplo (MCM) es: " << MCM << endl;
    
    return 0;
}
int funcionmcd(int A, int B){
    int i,mcd;
    i=1;
    while(i<=A && i<=B){
        if(A%i==0 && B%i==0){
            mcd=i;
        }
        i=i+1;
    }
    return mcd;
}
int funcionmcm(int A,int B){
    int mcm;
    mcm=A*B/funcionmcd(A,B);
    return mcm;
}