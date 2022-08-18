/* Taller 3 Punto 2: Garcia Sofia, Muñoz Sergio, Pineda Daniel
	Factura con cuentas discriminadas.
*/

#include <iostream>
using namespace std;

int main(){
	double MC, DP, PB, PF, IB, IF, T;
	cout <<"Ingrese monto: ";
	cin >> MC;
	
	if (MC>500000){
		DP = MC*0.55;
		PB = MC*0.30;
		PF = MC*0.15;
		IB = PB*0.25;
		IF = PF*0.20;
		T = DP+PB+PF+IB+IF;
	}
	else{
		DP = MC*0.70;
		PF = MC*0.30;
		IF = PF*0.20;
		T = DP+PF+IF;	
	}
	cout <<"Dinero Propio: "<<DP<<endl;
	cout <<"Prestamo a fabricante: "<<PF<<endl;
	cout <<"Interes de Prestamo a Fabricante: "<<IF<<endl;
	
	if (MC>500000){
		cout <<"Prestamo Bancario: "<<PB<<endl;
		cout <<"Interes Bancario: "<<IB<<endl;
		cout <<"Total: "<<T<<endl;
	}
	else{
		cout <<"No hay Prestamo Bancario."<<endl;
		cout <<"Total: "<<T<<endl;	
	}	
	return 0;
}

