/* GARCÍA, MUÑOZ, PINEDA
Control de ventas*/
#include <iostream>
#include <cstdlib>
using namespace std;
const int vendedores=18;
const int productos=10;
void printsales(int matrixsales[][productos],int salesmen,int products);
int main(){
	int menu=1, hacer, aux, llenar;
	int ventas[vendedores][10];
	cout<<"Este programa muestra una matriz para controlar las ventas de la org."<<endl;
/*  cout<<"0. Llenar matriz con 0."<<endl;   //                        
	cout<<"dlc. Llenar matriz con numeros aleatorios."<<endl;
	cin>>llenar;
	if(llenar==0){*/
		for(int i=0;i<vendedores;i++){
			for(int j=0;j<productos;j++){
				ventas[i][j]=0;
			}
		}/* 
}                                                //     OPCIÓN PARA ESCOGER LLENAR CON VALORES ALEATORIAMENTE
	else{
		for(int i=0;i<vendedores;i++){
			for(int j=0;j<productos;j++){
				ventas[i][j]=rand()%1000000;
			}
		}
	}*/
	printsales(ventas,vendedores,productos);
	cout<<endl;
	while(menu==1){
		cout<<"Bienvenido."<<endl;
		cout<<endl;
		cout<<"Que desea hacer?: "<<endl;
		cout<<"1. Ingresar la venta de un producto."<<endl; 
		cout<<"2. Ver ingresos de un vendedor."<<endl;
		cout<<"3. Ver ingresos por un producto."<<endl;
		cout<<"4. Ver ingresos totales."<<endl;
		cout<<"5. Ver detalle de ventas."<<endl;
		cout<<"6. (O cualquier otro numero) Salir."<<endl;
		cin>>hacer;
		if(hacer>=1&&hacer<=5){			
			while(hacer==1){
				int R, C, valor;
				cout<<"Numero del vendedor: ";
				cin>>R;
				while(R<1||R>vendedores){
					cout<<"Numero no valido "<<endl;
					cout<<endl;
					cout<<"Numero del vendedor: ";
					cin>>R;					
				}
				cout<<"Numero del producto: ";
				cin>>C;
				while(C<1||C>productos){
					cout<<"Numero no valido "<<endl;
					cout<<endl;
					cout<<"Numero del producto: ";
					cin>>C;					
				}
				cout<<"Valor: $";
				cin>>valor;
				ventas[R-1][C-1]=ventas[R-1][C-1]+valor;
				printsales(ventas,vendedores,productos); 
				cout<<endl;
				cout<<"1. Ingresar otro producto."<<endl;
				cout<<"2. Volver al menu principal."<<endl;
				cout<<"3. (O cualquier otro numero) Salir."<<endl;
				cin>>aux;
				switch(aux){
					case 1:
						break;
					case 2:
						hacer=0;
						break;
					default:
						hacer=0;
						menu=0;
						break;
				}
			}
			while(hacer==2){
				cout<<endl;
				int ingresosv=0, R;
				cout<<"Numero del vendedor: ";
				cin>>R;
				for(int i=0;i<productos;i++){
					ingresosv=ingresosv+ventas[R-1][i];
				}
				cout<<endl;
				cout<<"El vendedor "<<R<<" tiene un total de ingresos de $"<<ingresosv<<endl;
				cout<<endl;
				cout<<"1. Ver ingresos de otro vendedor."<<endl;
				cout<<"2. Volver al menu principal."<<endl;
				cout<<"3. (O cualquier otro numero) Salir."<<endl;
				cin>>aux;
				switch(aux){
					case 1:
						break;
					case 2:
						hacer=0;
						break;
					default:
						hacer=0;
						menu=0;
						break;
				}
			}
			while(hacer==3){
				cout<<endl;
				int ingresosp=0, C;
				cout<<"Numero del producto: ";
				cin>>C;
				for(int i=0;i<vendedores;i++){
					ingresosp=ingresosp+ventas[i][C-1];
				}
				cout<<endl;
				cout<<"Se han acumulado un total de  $"<<ingresosp<<" del producto "<<C<<endl;
				cout<<endl;
				cout<<"1. Ver ingresos por otro producto."<<endl;
				cout<<"2. Volver al menu principal."<<endl;
				cout<<"3. (O cualquier otro numero) Salir."<<endl;
				cin>>aux;
				switch(aux){
					case 1:
						break;
					case 2:
						hacer=0;
						break;
					default:
						hacer=0;
						menu=0;
						break;
				}
			}
			while(hacer==4){
				cout<<endl;
				int ingresost=0, R, C;
				for(int i=0;i<vendedores;i++){
					for(int j=0;j<productos;j++){
						ingresost=ingresost+ventas[i][j];
					}
				}
				cout<<"Se han acumulado un total de  $"<<ingresost;
				cout<<endl;
				cout<<"1. Ver de nuevo."<<endl;
				cout<<"2. Volver al menu principal."<<endl;
				cout<<"3. (O cualquier otro numero) Salir."<<endl;
				cin>>aux;
				switch(aux){
					case 1:
						break;
					case 2:
						hacer=0;
						break;
					default:
						hacer=0;
						menu=0;
						break;
				}
			}
			while(hacer==5){
				cout<<endl;
				printsales(ventas,vendedores,productos);
				cout<<"1. Volver a ver detalle."<<endl;
				cout<<"2. Volver al menu principal."<<endl;
				cout<<"3. (O cualquier otro numero) Salir."<<endl;
				cin>>aux;
				switch(aux){
					case 1:
						break;
					case 2:
						hacer=0;
						break;
					default:
						hacer=0;
						menu=0;
						break;
				}
			}
		}
		else{
			menu=0;
		}	
	}
	return 0;
}
void printsales(int matrixsales[][productos],int salesmen,int products){
	cout<<"#Producto:    |      1|      2|      3|      4|      5|      6|      7|      8|      9|     10|"<<endl;
	cout<<"_______________________________________________________________________________________________"<<endl;
	for(int i=0;i<salesmen;i++){
		cout<<"Vendedor "<<i+1<<"   ";
		if(i<9){
			cout<<" ";
		}
		cout<<"|$";	
		for(int j=0;j<products;j++){
			if(matrixsales[i][j]<100000){
				cout<<" ";
			}
			if(matrixsales[i][j]<10000){
				cout<<" ";
			}
			if(matrixsales[i][j]<1000){
				cout<<" ";
			}
			if(matrixsales[i][j]<100){
				cout<<" ";
			}
			if(matrixsales[i][j]<10){
				cout<<" ";
			}
			cout<<matrixsales[i][j]<<"|";
			if(j<products-1){
				cout<<"$";
			}
		}
		cout<<endl;
	}
	cout<<"_______________________________________________________________________________________________"<<endl;
	cout<<endl;
	return;
}
