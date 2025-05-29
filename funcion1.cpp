#include<iostream>
using namespace std;

void suma(int val1, int val2);
void resta(int val1, int val2);
int produc(int val1, int val2);
int divi(int val1 , int val2);

int main(){
	int num1,num2,resultadomulti,resultadodivi;
	cout<<"Ingrese el primer numero: "; cin>>num1;
	cout<<"Ingrese el segundo numero: "; cin>>num2;
	suma(num1,num2);
	resta(num1,num2);
	resultadomulti=produc(num1,num2);
	cout<<"La multiplicacion de "<<num1<<" y "<<num2<<" es "<<resultadomulti<<endl;
	resultadodivi=divi(num1,num2);
	cout<<"La division de "<<num1<<" y "<<num2<<" es "<<resultadodivi<<endl;
	return 0;
}
void suma (int val1 , int val2){
	int adicion;
	adicion=val1+val2;
	cout<<"El valor de la suma de "<<val1<<" y "<<val2<<" es "<<adicion<<endl;
}
void resta (int val1 , int val2){
	int sustrac;
	sustrac=val1-val2;
	cout<<"El valor de la resta de "<<val1<<" y "<<val2<<" es "<<sustrac<<endl;
}
int produc (int val1, int val2){
	int multi;
	multi=val1*val2;
	return (multi);
}
int divi (int val1 , int val2){
	int division;
	if(val2==0){
		// Esta validación evita que se realice una división por cero
		cout<<"ERROR: La division entre 0 no existe "<<endl;
	}
	else{
		division=val1/val2;
	}
	return (division);
}