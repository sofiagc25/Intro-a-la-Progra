/* MUÑOZ
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	struct datos{
		string nombre;
		string apellido;
		int edad;
		char sexo;
		float telefono;
	};
	datos registro[5];
	for(int i=0;i<5;i++){
		cout<<"Paciente "<<i+1<<":"<<endl;
		cout<<"Nombre: ";
		cin>>registro[i].nombre;
		cout<<"Apellido: ";
		cin>>registro[i].apellido;
		cout<<"Edad: ";
		cin>>registro[i].edad;
		cout<<"Sexo: ";
		cin>>registro[i].sexo;
		cout<<"Telefono: ";
		cin>>registro[i].telefono;
	}
	return 0;
}
