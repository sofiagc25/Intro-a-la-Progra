/*GARC�A, MU�OZ, PINEDA
	Determinar el mayor entre dos n�meros*/

#include <iostream>
using namespace std;

int main()
{
	cout<<"Este programa compara dos numeros y le indica cual es el mayor"<<endl;
	double n1,n2; //variables de entrada
	cout<<"Inserte el primer numero (separado por punto decimal)"<<endl;
	cin>>n1; //declarar variable para el primer n�mero
	cout<<"Inserte el segundo numero (separado por punto decimal)"<<endl;
	cin>>n2; //declarar variable para el segundo n�mero
	if(n1>=n2) // si el primero es mayor, entonces ser� el mayor, si son iguales, ambos ser�n el mayor. 
		cout<<"El numero mayor es "<<n1<<endl; 
	else //en otro caso, el segundo n�mero es el mayor
		cout<<"El numero mayor es "<<n1<<endl;
		
	return 0;
}
