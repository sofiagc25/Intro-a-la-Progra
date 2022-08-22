/* GARCÍA, MUÑOZ, PINEDA
ESTE PROGRAMA DETERMINA EL COSTO DE LA ENTRADA DE CINE EN BASE A LA LOCALIDAD
Y EL DIA */
#include<string>
#include <iostream>
using namespace std;
int main () {
	char D;//variables de entrada, l:localidad y D: dia
	int L;//Localidad en entero
	cout<<"Inserte las localidades en numero"<<endl;
	cout<<"Inserte su localidad:"<<endl;
	cin>>L;
	cout<<"Inserte el dia (Letra en mayuscula)"<<endl;
	cout<<"Lunes: L"<<endl;
	cout<<"Martes: M"<<endl;
	cout<<"Miercoles: I"<<endl;
	cout<<"Jueves: J"<<endl;
	cout<<"Viernes: V"<<endl;
	cout<<"Sabado: S"<<endl;
	cout<<"Domingo: D"<<endl;
	cin>>D;
		if((L==1)||(L==2)){
			if (L==1){
			 switch(D){
				case 'M':
				case 'J':
					cout<<"El costo de la boleta es $6500"<<endl;
					break;
				case 'I':	
				case 'L':
				case 'S':
				case 'D':	
					cout<<"El costo de la boleta es $9000"<<endl;
					break;
				default:
					cout<<"No hay funciones ese dia "<<endl;
			  }	
			}
		   else{
		   	switch(D){
			    case 'M':
				case 'J':	
					cout<<"El costo de la boleta es $4500"<<endl;
				break;
				case 'I':					
				case 'L':				
				case 'S':				
				case 'D':					
					cout<<"El costo de la boleta es $7000"<<endl;
				break;
				default:
					cout<<"No hay funciones ese dia "<<endl;
		       }
		   }
		}
	    else{
	    	cout<<"Es una localidad invalida"<<endl;//Si la localidad no es 1 o 2 se obtiene error
		}
	return 0;

}
