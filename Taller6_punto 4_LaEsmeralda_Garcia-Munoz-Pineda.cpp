/* GARCÍA, MUÑOZ, PINEDA
Este programa */

#include <iostream>
using namespace std;
float subchilds(int childs); //subsidio por hijos en función de la cantidad de hijos
float newsal(float sal); //nuevo salario en función de su salario base
void espacio();
int main(){
	float salario, subsidio;
	int hijos;
	cout<<"Este programa determina los incrementos en los gastos por mano de obra de un empleado de acuerdo con la politica propuesta:"<<endl;
	cout<<"Inserte el salario que el empleado gana actualmente: $";
	cin>>salario;
	espacio();
	cout<<"Inserte la cantidad de hijos del empleado: ";
	cin>>hijos;
	espacio();
	salario=newsal(salario);
	subsidio=subchilds(hijos);
	cout<<"El nuevo salario sera de: $"<<salario<<endl;
	cout<<"El valor del subsidio es de: $"<<subsidio<<endl;
	return 0;
}
void espacio(){ //función para imprimir un salto de espacio
	cout<<endl;
	return;
}
float subchilds(int childs){
	float subchilds=800000;
	for(int i=1;i<=childs;i=i+1){
		subchilds=subchilds/2;
		//cout<<"contador: "<<i<<"subsidio: $"<<subchilds<<endl; BANDERA
	}
	return subchilds;
}
float newsal(float sal){
	float newsal;
	if(sal>=0){
		if(sal>5000000){
		newsal=sal*1.03;
		}
		if(sal>=2000000&&sal<=5000000){
			newsal=sal*1.04;
		}
		if(sal<2000000){
			newsal=sal*1.05;
		}
	}
	else{
		cout<<"El salario debe ser un número positivo"<<endl;
		newsal=0;
	}
	return newsal;	
}
