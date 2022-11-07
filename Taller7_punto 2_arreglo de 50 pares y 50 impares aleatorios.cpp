/*
*/
#include <iostream>
#include <cstdlib>
using namespace std;
void espacio();
int main(){
	int arrand[100];
	for(int i=0;i<50;i++){
		arrand[i]=rand()*2;
	}
	for(int i=50;i<100;i++){
		arrand[i]=rand()*2+1;
	}
	for(int i=0;i<100;i++){
		cout<<i+1<<" : "<<arrand[i]<<endl;
	}
	return 0;
}
void espacio(){ //función para imprimir un salto de espacio
	cout<<endl;
	return;
}
