#include<iostream>
using namespace std;
void seriefibonacci (int N){

	int a,b,i,siguientenum,suma;
	a=0;
	b=1;
	suma=0;
	for(i=1 ; i<=N ; i++){
		cout<<a<<" , ";
		suma=suma+a;
		siguientenum=a+b;
		a=b;
		b=siguientenum;
	}
	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"La suma de la serie hasta el termino "<<N<<" es "<<suma<<endl;
}
int main(){
	int n;
	cout<<"ingrese el valor de n: "; cin>>n;
	cout<<"Serie Fibonacci: "<<endl;
	seriefibonacci(n);
	
	return 0;
}