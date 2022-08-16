/* GARCÍA, MUÑOZ, PINEDA
  ESTE PROGRAMA LE INDICA EL COSTO DE UN PACIENTE POR DÍA DEPENDIENDO DE LA EDAD Y EL TIPO DE ENFERMEDAD QUE TIENE
Tipo de Enfermedad | Costo/Paciente/Día
				 1 | 25
				 2 | 16
				 3 | 20
				 4 | 32                      */
#include <iostream>
using namespace std;
int main(){
int a,i; //variables de entrada
double m; //multiplicador dependiendo de la edad
double CT; //variables de salida
cout << "Digite numericamente la edad en anos del paciente:" << endl;
cin >> a;
if((a>=0)&&(a<=116)){
	cout << "Inserte la enfermedad:" << endl;
	cin >> i;
	if((i>=1)&&(i<=4)){
	  if((a>=14)&&(a<=22)){
	    m=1.1;
	    switch(i){
	    	case 1: 
				CT=25*m;
	    		cout <<"Costo total: "<< CT <<endl;
				break;
			case 2: 
				CT=16*m;
				cout <<"Costo total: "<< CT <<endl;  
				break;
			case 3: 
				CT=20*m;
				cout <<"Costo total: "<< CT <<endl;
				break;
			case 4: 
				CT=32*m;
				cout <<"Costo total: "<< CT <<endl;
				break;
			default:
				cout <<"IMPOSIBLE "<<endl;
		}
	  }
	  else{
	    m=1;
	    switch(i){
	    	case 1: 
				CT=25*m;
	    		cout <<"Costo total: "<< CT <<endl;
				break;
			case 2: 
				CT=16*m;
				cout <<"Costo total: "<< CT <<endl;
				break;
			case 3: 
				CT=20*m;
				cout <<"Costo total: "<< CT <<endl;
				break;
			case 4: 
				CT=32*m;
				cout <<"Costo total: "<< CT <<endl;
				break;
			default:
				cout <<"IMPOSIBLE "<<endl;
		}
	  }    
	}
	else{
	    cout<<"Alguno de los datos ingresados no son validos, por favor intente de nuevo. "<<endl;
	  }
}
else {
	cout<<"La edad digitada no es valida, por favor intente de nuevo."<<endl; 
}
  return 0;
}

