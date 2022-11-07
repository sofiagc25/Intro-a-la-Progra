/* MUÑOZ, PINEDA
función que busca una letra en un arreglo*/
#include <iostream>
using namespace std;
int posicionletra(char alfabeto[],int tamano,char letra);
int main(){
	int pos;
	char let;
	cout<<"Letra a buscar: ";
	cin>>let;
	cout<<endl;
	char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};
	pos=posicionletra(alpha,27,let);
	cout<<"La letra "<<let<<" se encuentra en la posicion "<<pos<<endl;
	return 0;
}
//_______________________________________________________________________________________________________________________________________________________
//Función:
int posicionletra(char alfabeto[],int tamano,char letra){
	int posicionletra;
	for(int i=0;i<tamano;i++){
		if(letra==alfabeto[i]){
			posicionletra=i;
		}
	}
	return posicionletra;
}
//_______________________________________________________________________________________________________________________________________________________

