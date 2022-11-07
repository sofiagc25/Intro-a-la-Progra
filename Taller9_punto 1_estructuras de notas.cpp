/* GARCÍA, MUÑOZ, PINEDA
Comparación entre las notas de varios estudiantes*/
#include <iostream>
#include <string>
using namespace std;
struct Student{
	string nombre;
	float notas[4];
};
void fill(Student set[], int size);
float promedio(Student dontmoyenne);
string namebestav(Student set[],int size);
void ordenar(Student set[],int size);
int main(){
	int cantidad;
	string mejor;
	cout<<"Cantidad de estudiantes: ";
	cin>>cantidad;
	cout<<endl;
	Student estudiantes[cantidad];
	fill(estudiantes,cantidad);
	//cout<<"El promedio del estudiante 1 es "<<promedio(estudiantes[0]);
	mejor=namebestav(estudiantes,cantidad);
	cout<<endl;
	cout<<"Nombre retornado como mejor promedio: "<<mejor<<endl;
	ordenar(estudiantes,cantidad);
	return 0;
}
void fill(Student set[], int size){
	for(int i=0;i<size;i++){
		cout<<"Estudiante "<<i+1<<":"<<endl;
		cout<<"Nombre: ";
		cin>>set[i].nombre;
		for(int j=0;j<4;j++){
			cout<<"Nota "<<j+1<<": ";
			cin>>set[i].notas[j];
		}
		cout<<endl;
	}
	return;
}
float promedio(Student dontmoyenne){
	float suma=0;
	for(int i=0;i<4;i++){
		suma=suma+dontmoyenne.notas[i];
	}
	return suma/4;	
}
string namebestav(Student set[],int size){
	Student mejorestudiante;
	float mejorprom=0;
	for(int i=0;i<size;i++){
		if(promedio(set[i])>=mejorprom){
			mejorestudiante=set[i];
			mejorprom=promedio(set[i]);
		}
	}
	cout<<"Mejores: ";
	for(int i=0;i<size;i++){
		if(promedio(set[i])==mejorprom){
			cout<<set[i].nombre<<"  ";
		}
	}
	return mejorestudiante.nombre;
}
void ordenar(Student set[],int size){
	Student aux;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(promedio(set[j])>promedio(set[j+1])){
				aux=set[j+1];
				set[j+1]=set[j];
				set[j]=aux;
			}
		}
	}
	cout<<"Nombre  |Promedio"<<endl;
	for(int i=0;i<size;i++){
		cout<<set[i].nombre<<"  |"<<promedio(set[i])<<endl;
	}
}

