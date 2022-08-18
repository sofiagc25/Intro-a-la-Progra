/* Taller 3 Punto 1: Garcia Sofia, Muñoz Sergio, Pineda Daniel
	Calculadora de IMC con respectivo diagnóstico
*/

#include<iostream>
using namespace std;

int main(){
	float w, h, IMC;
	cout << "Ingrese su peso en kilogramos: ";
	cin >> w;
	cout << "Ingrese su altura en metros: ";
	cin >> h;
	
	IMC=w/(h*h);
	cout<<"IMC = "<<IMC<<" kg/m^2"<<endl;
	cout<<endl;
	if(IMC<16){
		cout<<"Diagnostico: Debe ingresar al hospital por urgencias."<<endl;
	}
	else if((IMC>=16)&&(IMC<17)){
		cout<<"Diagnostico: Infrapeso."<<endl;
	}
	else if((IMC>=17)&&(IMC<18)){
		cout<<"Diagnostico: Bajo peso."<<endl;
	}
	else if((IMC>=18)&&(IMC<25)){
		cout<<"Diagnostico: Peso normal."<<endl;
	}
	else if((IMC>=25)&&(IMC<30)){
		cout<<"Diagnostico: Sobrepeso obesidad grado I."<<endl;
	}
	else if((IMC>=30)&&(IMC<35)){
		cout<<"Diagnostico: Obesidad pre mórbida grado III."<<endl;
	}	
	else if((IMC>=35)&&(IMC<40)){
		cout<<"Diagnostico: Sobrepeso obesidad grado I."<<endl;
	}
	else if(IMC<40){
		cout<<"Diagnostico: Obesidad mórbida obesidad grado IV."<<endl;
	}
	return 0;	
}
