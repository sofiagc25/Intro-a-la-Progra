/* GARCÍA, MUÑOZ, PINEDA
Este programa imprime el producto y la suma total de todos los números pares entre un par y otro*/
#include <iostream>
using namespace std; 

int main(){
	int numc=20, numf=400; //número PAR en el que comienza y número PAR en el que termina (si el número en el que empieza es impar, hará la suma únicamente de números impares)
	int sum=0, i; 
	long double pro=1;
	for(i=numc;i<=numf;i=i+2){
		sum=sum+i;
	}
	cout<<"Resultado de la suma de los numeros pares desde "<<numc<<" hasta "<<numf<<" es "<<sum<<endl;
	cout<<endl;
	for(i=numc;i<=numf;i=i+2){
		pro=pro*i;
	}
	cout<<"Resultado del producto de los numeros pares desde "<<numc<<" hasta "<<numf<<" es "<<pro<<endl;
	return 0;
	
}
