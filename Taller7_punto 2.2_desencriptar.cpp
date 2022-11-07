/* MUÑOZ, PINEDA
Función para desencriptar*/
#include <iostream>
using namespace std;
int posicionletra(char alfabeto[],int tamano,char letra);
void desencriptar(char alfabeto[],int tamanoalfabeto,char letras[],int tamanoletras,char desplazamiento[],int direccion[],int tamanodd);
int main(){
	char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n=15, tsd=37; //Tamaño del vector letras, tamaño vectores desplzamiento y dirección
	/*cout<<"Inserte el tamano del vector letras: ";          declarar tamaño del vector manualmente 
	cin>>n;*/
	char let[n]="Verognab PBsdil"; 
	/*cout<<"Inserte caracter a caracter: "<<endl;          opción para llenar el vector manualmente
	for(int i=0;i<n;i++){
		cout<<i<<": ";
		cin>>let[i];
	}*/
	/*cout<<"Inserte el tamano del vector desplazamiento y direccion: ";              declarar tamaño del vector manualmente 
	cin>>tsd;*/
	char shift[tsd]="jinbjcbfhedgicfefeccilcffdelngidligjb";
	/*cout<<"Inserte caracter a caracter para desplazamiento: "<<endl;            opción para llenar el vector manualmente
	for(int i=0;i<tsd;i++){
		cout<<i<<": ";
		cin>>let[i];
	}*/
	int dir[tsd]={1,0,1,0,0,0,1,1,0,1,1,1,0,1,0,1,0,1,1,1,0,1,0,0,1,0,1,0,1,0,0,1,1,0,1,0,0};
	/*cout<<"Inserte 0 o 1 para direccion: "<<endl;
	for(int i=0;i<tsd;i++){
		cout<<i<<": ";
		cin>>let[i];
	}*/
	
	desencriptar(alpha,27,let,n,shift,dir,tsd);
	return 0; 
}
int posicionletra(char alfabeto[],int tamano,char letra){
	int posicionletra;
	for(int i=0;i<tamano;i++){
		if(letra==alfabeto[i]){
			posicionletra=i;
		}
	}
	return posicionletra;
}
void desencriptar(char alfabeto[],int tamanoalfabeto,char letras[],int tamanoletras,char desplazamiento[],int direccion[],int tamanodd){
	int posveclet=0; //posición vector letras
	for(int i=0;i<tamanodd;i++){
		if(direccion[i]==1){
			posveclet=posveclet+posicionletra(alfabeto,tamanoalfabeto,desplazamiento[i]);
		}
		else{
			posveclet=posveclet-posicionletra(alfabeto,tamanoalfabeto,desplazamiento[i]);
		}
	cout<<letras[posveclet];
	}
	return;
}

