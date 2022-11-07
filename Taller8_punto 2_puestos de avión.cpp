/* GARCÍA, MUÑOZ, PINEDA
Reservar puestos de avión*/
#include <iostream>
using namespace std;
void printplane(char planename[][4],int rows,int columns);
int main(){
	char FIUM[25][4];
	for(int i=0;i<25;i++){
		for(int j=0;j<4;j++){
			FIUM[i][j]=' ';
		}
	}
	int book=1;
	cout<<"Bienvenido a aerolineas FIUM"<<endl;
	cout<<endl;
	while(book==1){
		cout<<"Inserte 1 si quiere reservar"<<endl;
		cout<<"Inserte 0 si quiere salir"<<endl;
		cin>>book;
		int fila, columna;
		if(book==1){
			cout<<endl;
			printplane(FIUM,25,4);
			cout<<endl;
			cout<<"Inserte la fila: ";
			cin>>fila;
			while(fila<1||fila>25){
				cout<<"Fila no valida "<<endl;
				cout<<endl;
				cout<<"Inserte la fila: ";
				cin>>fila;
			}
			cout<<"Inserte la columna ";
			cin>>columna;
			while(columna<1||columna>4){
				cout<<"Columna no valida "<<endl;
				cout<<"Inserte la columna: ";
				cin>>columna;
			}
			if(FIUM[fila-1][columna-1]==' '){
				FIUM[fila-1][columna-1]='X';
				printplane(FIUM,25,4);
			}
			else{
				cout<<"El puesto ya esta reservado"<<endl;
			}			
		}
		cout<<endl;
	}
	return 0;
}
void printplane(char planename[][4],int rows,int columns){
	cout<<"  PUESTOS DISPONIBLES:"<<endl;
	cout<<"         1   2   3   4"<<endl;
	for(int i=0;i<rows;i++){
		cout<<"Fila "<<i+1<<" ";
		if(i<9){
			cout<<" ";
		}	
		for(int j=0;j<columns;j++){
			cout<<"["<<planename[i][j]<<"] ";
		}
		cout<<endl;
	}
}
