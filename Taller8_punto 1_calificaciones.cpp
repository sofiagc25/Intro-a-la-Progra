/* GARCÍA, MUÑOZ, PINEDA
Matriz de calificación*/
#include <iostream>
using namespace std;
int main(){
	int calificaciones[5][4];
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			calificaciones[i][j]=0;
		}
	}
	for(int i=0;i<5;i++){
		cout<<"Cliente "<<i+1<<": "<<endl;
		cout<<"Califique de 1 a 10 los siguientes aspectos:"<<endl;
		cout<<"(1 es pésimo y 10 es excelente o inmejorable)"<<endl;
		cout<<"Aspecto 1: Atencion de parte de los empleados"<<endl;
		cout<<"Aspecto 2: Calidad de la comida"<<endl;		
		cout<<"Aspecto 3: Justicia del precio (el precio que pago le parece justo?)"<<endl;
		cout<<"Aspecto 4: Ambiente (muebles comodos?, musica adecuada?, iluminacion suficiente?, decoracion, etc.)"<<endl;
		cout<<endl;	
		for(int j=0;j<4&&(calificaciones [i][j]<=0||calificaciones[i][j]>10);j++){
			cout<<"Aspecto "<<j+1<<": ";
			cin>>calificaciones[i][j];
			while(calificaciones [i][j]<=0||calificaciones[i][j]>10){
				cout<<"Puntuacion no valida. Intente de nuevo."<<endl;
				cout<<"Aspecto "<<j+1<<": ";
				cin>>calificaciones[i][j];	
			}						
		}
	}
	return 0;
}

