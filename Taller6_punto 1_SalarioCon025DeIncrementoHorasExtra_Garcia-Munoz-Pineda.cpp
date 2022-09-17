/* GARCÍA, MUÑOZ, PINEDA
Este programa calcula el salario de una persona con un incremento de 25% para las horas extra (más de 40 h)*/
#include <iostream>
using namespace std;
float sal(float hours,float rate); //variables locales de la función: hora y tarifa en inglés
int main(){
	float horas, tarifa, salario; //variables del main en español
	cout<<"Este programa calcula el salario de una persona con un"<<endl;
	cout<<"incremento de 25% para las horas extra (mas de 40 h)"<<endl;
	cout<<"Inserte la tarifa horaria: $";
	cin>>tarifa;
	cout<<"Inserte las horas trabajadas: ";
	cin>>horas;
	cout<<endl;
	salario=sal(horas,tarifa);
	cout<<"El salario es: $"<<salario<<endl;
	return 0;	
}
float sal(float hours,float rate){ //definición de la función
	float sal=0; //las variables dentro de la función pueden tener el nombre de la función
	if(hours>=0&&hours<=270&&rate>=0){ //número de horas positivo y menor que máximo de horas al mes: 216 (10 horas diarias, 27 días mensuales)
		if(hours<=40){
			sal=hours*rate;
		}
		else{
			sal=hours*(rate*1.25); //tarifa horaria aumentada en un 25% multiplicada por la cantidad de horas
		}
	}
	else{
		cout<<"Numero de horas no valido"<<endl;
	}
	return sal;
}
