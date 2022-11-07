/* MUÑOZ, PINEDA 
Programa con función para sumar cruzado dos funciones y asignar los resultados en otra función*/
#include <iostream>
using namespace std;
int sumcross(int arreglo1[],int arreglo2[],int arregloR[],int n); // arreglosumando1, arreglosumando2, arreglototales, posiciónsuma
int main(){
	int s, maysum; //arrangements size, mayor de las sumas
	cout<<"Inserte tamano de los arreglos: ";
	cin>>s;
	int arment1[s]; 
	int arment2[s]; 
	int armentR[s];
	cout<<endl;
	cout<<"Arreglo 1"<<endl;
	for(int i=0;i<s;i++){
		cout<<"Numero #"<<i+1<<": ";
		cin>>arment1[i];		
	}
	cout<<endl;
	cout<<"Arreglo 2"<<endl;
	for(int i=0;i<s;i++){
		cout<<"Numero #"<<i+1<<": ";
		cin>>arment2[i];		
	}
	cout<<endl;
	cout<<"Arreglo resultante"<<endl;
	maysum=sumcross(arment1,arment2,armentR,s);
	cout<<endl;
	cout<<"El mayor resultado de suma cruzada es: "<<maysum;
	return 0;	
}
//_______________________________________________________________________________________________________________________________________________________
//Función:
int sumcross(int arreglo1[],int arreglo2[],int arregloR[],int n){
	int posmayor=0;
	for(int i=0;i<n;i++){
		arregloR[i]=arreglo1[i]+arreglo2[n-i-1];
		cout<<"Resultado"<<i+1<<": "<<arregloR[i]<<endl;
		if(arregloR[i]>=arregloR[posmayor]){
			posmayor=i;
		}
	}	
	return arregloR[posmayor];
}
//_______________________________________________________________________________________________________________________________________________________

