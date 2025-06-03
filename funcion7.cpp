#include<iostream>
using namespace std;
void verificarAmistad(int a, int b);
int funcionsumadivisores(int num1);
int main(){
    int a,b;
    cout<<"Ingrese el primer numero"; cin>>a;
    cout<<"Ingrese el segundo numero"; cin>>b;
    verificarAmistad(a,b);
    return 0;
}
int funcionsumadivisores(int num1){
    int i,sumadenum1;
    sumadenum1=0;
    for(i=1;i<num1;i++){
        if(num1%i==0){
            sumadenum1=sumadenum1+i;
        }
    }
    return sumadenum1;
}
void verificarAmistad(int a, int b) {
    if (funcionsumadivisores(a)==b && funcionsumadivisores(b)==a) {
        cout<<"Los numeros son amigos: "<<endl;
    } else {
        cout<<"Los numeros no son amigos: "<<endl;
    }
}