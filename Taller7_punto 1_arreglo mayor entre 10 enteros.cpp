/*
*/
#include <iostream>
using namespace std;
void espacio();
int main(){
	int datos[10];
	int posmayor;
	for(int i=0;i<10;i++){
		cout<<"Inserte el dato #"<<i+1<<": ";
		cin>>datos[i];
	}
	posmayor=0;
	for(int i=0;i<10;i++){
		if(datos[i]>=datos[posmayor]){
			posmayor=i;
		}
	}
	espacio();
	cout<<"El numero mayor es: "<<datos[posmayor]<<endl;
	cout<<"y su posicion es: "<<posmayor+1<<endl;	
	return 0;
}
void espacio(){ //función para imprimir un salto de espacio
	cout<<endl;
	return;
}
