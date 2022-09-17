/* GARCÍA, MUÑOZ, PINEDA
Valor porcentual descontado*/
#include <iostream>
using namespace std;
float disccperc(float value, float paid); //disccount percentage
void espacio();
int main(){
	float valor, pago, descuento;
	cout<<"Este programa calcula el valor porcentual descontado de una compra"<<endl;
	espacio();
	cout<<"Valor del producto: $";
	cin>>valor;
	cout<<"Valor pagado por el cliente: $";
	cin>>pago;
	descuento=disccperc(valor,pago);
	espacio();
	cout<<"El descuento aplicado fue de: "<<descuento<<"%"<<endl;
	return 0;		
}
void espacio(){ //función para imprimir un salto de espacio
	cout<<endl;
	return;
}
float disccperc(float value, float paid){
	float disccperc;
	disccperc=((value-paid)/value)*100;
	return disccperc; 
}

