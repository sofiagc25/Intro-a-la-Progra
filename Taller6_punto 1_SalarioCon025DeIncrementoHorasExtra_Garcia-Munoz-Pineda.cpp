/* GARC�A, MU�OZ, PINEDA
Este programa calcula el salario de una persona con un incremento de 25% para las horas extra (m�s de 40 h)*/
#include <iostream>
using namespace std;
float sal(float hours,float rate); //variables locales de la funci�n: hora y tarifa en ingl�s
int main(){
	float horas, tarifa, salario; //variables del main en espa�ol
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
float sal(float hours,float rate){ //definici�n de la funci�n
	float sal=0; //las variables dentro de la funci�n pueden tener el nombre de la funci�n
	if(hours>=0&&hours<=270&&rate>=0){ //n�mero de horas positivo y menor que m�ximo de horas al mes: 216 (10 horas diarias, 27 d�as mensuales)
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
