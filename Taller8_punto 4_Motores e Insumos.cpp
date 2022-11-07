/* GARCÍA, MUÑOZ, PINEDA
Motores e insumos, costos, existencia y pedidos*/
#include <iostream>
using namespace std;
const int motores=7; //estos (como su tamaño) pueden variar y se podría pedir al usuario que los llene o extaer de una base de datos
const int insumos=8; //"                                                                                                           "
void printmx(int matrix[][insumos],int rows,int columns);
void printatf(float arr[],int size,int orientation);
void printati(int arr[],int size,int orientation);
void costomotores(int data[][insumos],int rowsd, int columnsd, float costu[], float costt[]);
void cantidadinsumos(int data[][insumos], int rowsd, int columnsd, int demand[], int quantity[]);
void costosinsumos(int data[][insumos], int rowsd, int columnsd, int demand[], float costu[], float costinss[]);
void falta(int data[][insumos], int rowsd, int columnsd, int demand[], int existence[], int difference[]);
int main(){
	int datos[motores][insumos]={10,20,20,40,0,60,10,80,0,70,0,50,40,30,0,10,5,10,15,0,10,15,5,0,10,20,10,20,10,0,10,20,4,0,8,0,6,8,4,0,0,6,9,12,15,0,1,24,20,18,0,14,0,10,8,6};
	cout<<"Matriz motores x insumos:"<<endl;
	printmx(datos,motores,insumos);
	float costos[insumos]={3.5,0.1,2,1.5,6,4.2,2.5,1.3};
	cout<<endl;
	cout<<"Costos unitarios por insumo: "<<endl;
	printatf(costos,insumos,0);
	int pedidos[motores]={100,25,75,150,80,90,10};
	int existencia[insumos]={120,0,20,60,40,90,10,0};
	float costospro[motores]; //costos de producción
	costomotores(datos,motores,insumos,costos,costospro);
	cout<<endl;
	cout<<"Costos por motor: "<<endl;
	printatf(costospro,motores,1);
	cout<<"Pedidos por motor:"<<endl;
	printati(pedidos,motores,1);
	int qinsumos[insumos]; //cantidad de insumos para suplir la demanda (sin tener en cuenta las existencias)
	cantidadinsumos(datos,motores,insumos,pedidos,qinsumos);
	cout<<"Cantidad de insumos para cumplir con los pedidos:"<<endl;
	printati(qinsumos,insumos,0);
	cout<<endl;
	float costosins[insumos]; //Costos por cada insumo para cumplir con los pedidos de cada mes
	costosinsumos(datos,motores,insumos,pedidos,costos,costosins);
	cout<<"Costos por cada insumo para cumplir con los pedidos de cada mes:"<<endl;
	printatf(costosins,insumos,0);
	int diferencia[insumos];
	falta(datos,motores,insumos,pedidos,existencia,diferencia);	
	
}
void printmx(int matrix[][insumos],int rows,int columns){ //función para imprimir matrices
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			if(matrix[i][j]<10){
				cout<<" ";
			}
			cout<<matrix[i][j]<<"   ";
		}
		cout<<endl;
	}
	return;
}
void printatf(float arr[],int size,int orientation){ //función para imprimir arreglos flotantes
	if(orientation==0){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<"  ";
		}
		cout<<endl;
	}
	if(orientation==1){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<endl;
		}
		cout<<endl;
	}
	
}
void printati(int arr[],int size,int orientation){ //función para imprimir arreglos enteros
	if(orientation==0){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<"  ";
		}
		cout<<endl;
	}
	if(orientation==1){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<endl;
		}
		cout<<endl;
	}
	
}
void costomotores(int data[][insumos],int rowsd, int columnsd, float costu[], float costt[]){ // a) función para calcular los costos por motor
	for(int i=0;i<rowsd;i++){
		int product[columnsd];
		int sum=0;
		for(int j=0;j<columnsd;j++){
			product[j]=costu[j]*data[i][j];
			sum=sum+product[j];
		}
		costt[i]=sum;		
	}
	return;
}
void cantidadinsumos(int data[][insumos], int rowsd, int columnsd, int demand[], int quantity[]){ // b) función para calcular la cantidad de cada insumo para cumplir con los pedidos
	for(int i=0;i<columnsd;i++){
		int sum=0;
		for(int j=0;j<rowsd;j++){
			sum=sum+(data[j][i]*demand[j]);
		}
		quantity[i]=sum; 
	}
	return;
}
void costosinsumos(int data[][insumos], int rowsd, int columnsd, int demand[], float costu[], float costinss[]){ // c) costos totales por insumos para cumplir con los pedidos
	int quantity[columnsd];
	cantidadinsumos(data,rowsd,columnsd,demand,quantity);
	for(int i=0;i<insumos;i++){
		costinss[i]=quantity[i]*costu[i];
	}
	return;
}
void falta(int data[][insumos], int rowsd, int columnsd, int demand[], int existence[], int difference[]){ // d) diferencia entre requerimiento y existencia
	int quantity[columnsd];
	cantidadinsumos(data,rowsd,columnsd,demand,quantity);
	for(int i=0;i<insumos;i++){
		if(quantity[i]>existence[i]){
			difference[i]=quantity[i]-existence[i];
			cout<<"Se necesitan "<<difference[i]<<" del insumo "<<i<<endl;
		}
		else{
			difference[i]=0; //Si hay más en existencia de lo que se requiere, la diferencia va a ser 0. Se podría indicar que una diferencia negativa significa que sobran...
		}
	}
	return;
}
