/* GARC�A, MU�OZ, PINEDA
Siguiente n�mero primo*/
#include <iostream>
using namespace std;
long int siguiente(long int pri);
void espacio();
int main(){
	long int primo, sig;
	cout<<"Inserte un numero para saber el siguiente numero primo: ";
	cin>>primo;
	espacio();
	int cond;
	for(int con=1;con<=primo;con=con+1){ //el contador empieza en 1 y se repite el proceso siempre que sea menor o igual que el n�mero insertado
		int res=primo%con; //m�dulo de el n�mero insertado entre el n�mero en el que va el contador, se hace la prueba con todos los n�meros desde el 1 hasta el n�mero insertado
		if(res==0){ //cada vez que el resultado del m�dulo sea =0, se agrega una unidad al contador de divisores
			cond=cond+1;
		}
	}
	if(cond==2){
		sig=siguiente(primo);
		cout<<"El siguiente numero primo es: "<<sig<<endl;
	}
	else{
		cout<<"El numero insertado no es primo "<<endl;
	}
	return 0;
}
void espacio(){ //funci�n para imprimir un salto de espacio
	cout<<endl;
	return;
}
long int siguiente(long int pri){ //funci�n que determina el siguiente n�mero primo (sin importar si el n�mero insertado es primo o no)
	int siguiente,con, cond, res; 
	bool criterio=0;
	pri=pri+1; //empieza la prueba con el n�mero siguiente al n�mero insertado 
	while(criterio==0){ 
		cond=0;
		for(con=1;con<=pri;con=con+1){ //el contador empieza en 1 y se repite el proceso siempre que sea menor o igual que el n�mero insertado
			res=pri%con; //m�dulo de el n�mero insertado entre el n�mero en el que va el contador, se hace la prueba con todos los n�meros desde el 1 hasta el n�mero insertado
			if(res==0){ //cada vez que el resultado del m�dulo sea =0, se agrega una unidad al contador de divisores
				cond=cond+1;
			}
		}
		if(cond==2){
			criterio=1;
		}
		else{
			pri=pri+1;
		}
	}
	siguiente=pri;
	return siguiente;
}
