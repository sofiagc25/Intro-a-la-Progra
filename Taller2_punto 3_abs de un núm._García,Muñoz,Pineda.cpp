/*GARC�A, MU�OZ, PINEDA
	Retornar valor absoluto de un valor*/

#include <iostream>
using namespace std;

int main()
{
	double a;
	cout<<"Este programa recibe un numero y retorna su valor absoluto"<<endl;
	cout<<"Inserte el numero separado por punto decimal"<<endl;
	cin>>a;
	if (a>=0)
	cout<<"el valor absoluto del numero insertado es "<<a<<endl;
	else
	cout<<"el valor absoluto del numero insertado es "<<a*-1<<endl; //s�lo se multiplica *-1 si el valor insertado es negativo, de lo contrario su valor absoluto es el n�mero insertado
	
	return 0;	
}
