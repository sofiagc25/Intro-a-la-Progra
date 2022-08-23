/*GARCÍA, MUÑOZ, PINEDA
Este programa le solicita un número y calcula su número factorial*/
#include <iostream>
using namespace std;

int main(){
	int a;
	double f=1;
	cout<<"Inserte el numero cuyo factorial quiere calcular (debe ser natural): ";
	cin>>a;
	while(a>1){
		f=f*a;
		a=a-1;
	}
	cout<<"El resultado factorial del numero es "<<f<<endl;
	return 0; 
}
