/* GARC�A, MU�OZ, PINEDA
Este programa solicita un numero y le indica si este es primo o no*/

#include <iostream>
using namespace std;
int main(){
	int pri, cond, con, res; //primo, contador de divisores s y contador para llegar al primo, resultado del modulo
	cout<<"Este programa solicita un numero y le indica si este es primo o no."<<endl;
	cout<<"Inserte un numero: ";
	cin>>pri;
	cond=0;
	for(con=1;con<=pri;con=con+1){ //el contador empieza en 1 y se repite el procesos siempre que sea menor o igual que el n�mero insertado
		res=pri%con; //m�dulo de el n�mero insertado entre el n�mero en el que va el contador, se hace la prueba con todos los n�meros desde el 1 hasta el n�mero insertado
		if(res==0){ //cada vez que el resultado del m�dulo sea =0, se agrega una unidad al contador de divisores
			cond=cond+1;
		}
	}
	cout<<"El numero "<<pri<<" tiene "<<cond<<" divisores"<<endl;
	if(cond==2){ //si la cantidad de divisores es exactamente igual a 2 (el 1 y el propio n�mero digitado), entonces el n�mero insertado es primo, de lo contrario no lo es
		cout<<"Por lo tanto, es un numero primo"<<endl;
	}
	else{
		cout<<"Por lo tanto, NO es un numero primo"<<endl;
	}
	
}
