/*GARCÍA, MUÑOZ, PINEDA
	Determinar el mayor entre dos números*/

#include <iostream>
using namespace std;

int main()
{
	cout<<"Este programa compara dos numeros y le indica cual es el mayor"<<endl;
	double n1,n2; //variables de entrada
	cout<<"Inserte el primer numero (separado por punto decimal)"<<endl;
	cin>>n1; //declarar variable para el primer número
	cout<<"Inserte el segundo numero (separado por punto decimal)"<<endl;
	cin>>n2; //declarar variable para el segundo número
	if(n1>=n2) // si el primero es mayor, entonces será el mayor, si son iguales, ambos serán el mayor. 
		cout<<"El numero mayor es "<<n1<<endl; 
	else //en otro caso, el segundo número es el mayor
		cout<<"El numero mayor es "<<n1<<endl;
		
	return 0;
}
