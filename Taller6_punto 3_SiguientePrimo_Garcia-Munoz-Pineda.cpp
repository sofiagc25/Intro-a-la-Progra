/* GARCÍA, MUÑOZ, PINEDA
Siguiente número primo*/
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
	for(int con=1;con<=primo;con=con+1){ //el contador empieza en 1 y se repite el proceso siempre que sea menor o igual que el número insertado
		int res=primo%con; //módulo de el número insertado entre el número en el que va el contador, se hace la prueba con todos los números desde el 1 hasta el número insertado
		if(res==0){ //cada vez que el resultado del módulo sea =0, se agrega una unidad al contador de divisores
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
void espacio(){ //función para imprimir un salto de espacio
	cout<<endl;
	return;
}
long int siguiente(long int pri){ //función que determina el siguiente número primo (sin importar si el número insertado es primo o no)
	int siguiente,con, cond, res; 
	bool criterio=0;
	pri=pri+1; //empieza la prueba con el número siguiente al número insertado 
	while(criterio==0){ 
		cond=0;
		for(con=1;con<=pri;con=con+1){ //el contador empieza en 1 y se repite el proceso siempre que sea menor o igual que el número insertado
			res=pri%con; //módulo de el número insertado entre el número en el que va el contador, se hace la prueba con todos los números desde el 1 hasta el número insertado
			if(res==0){ //cada vez que el resultado del módulo sea =0, se agrega una unidad al contador de divisores
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
