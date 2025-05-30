#include<iostream>
using namespace std;
int factorial (int n);
int main(){
    int m,n,c;
    cout<<"Ingrese el valor de m: "; cin>>m;
    cout<<"Ingrese el valor de n: "; cin>>n;

    if (m < 0 || n < 0) {
        cout << "Error: m y n deben ser números enteros no negativos." << endl;
        return 1; //EL PROGRAMA TERMINO CON UN ERROR
    }

    if (m < n) {
        cout << "Error: m debe ser mayor o igual a n para calcular la combinatoria." << endl;
        return 1;
    }

    c = factorial(m) / (factorial(n) * factorial(m - n));
    cout << "La combinatoria es: " << c << endl;

    return 0;
}
int factorial(int n){
    int f,i;
    f=1;
    for(i=2 ; i<=n ; i++){
        f=f*i;
    }
    return f;
}