/*GARCÍA, MUÑOZ, PINEDA
	Convertir de millas a kilometros*/

#include <iostream>
using namespace std;

int main()
{
	double mi;
	double km;
	const double f=1.609344; //declaración del factor de conversión de millas a kilometros (1 mi = 1.609344 km)
	cout<<"Este programa convierte una distancia dada en kilometros a millas "<<endl;
	cout<<"Inserte la distancia recorrida en millas separado por punto decimal "<<endl;
	cin>>mi;
	if ( mi!=0 )
	{
		km=f*mi;
		cout<<"la distancia en kilometros es "<<km<<endl;
	}    
	else
		cout<<"error"<<endl;
			
	return 0;
}

