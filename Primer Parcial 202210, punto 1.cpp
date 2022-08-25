#include <iostream>
using namespace std; 
int main(){
	cout<<"  Hora  |  Pasajeros  | Pasajeros |  Vehículo Utilizado   "<<endl;
	cout<<" salida |Transportados| en espera | Chiva | Van | Campero "<<endl;
	int p_esp=0, p_trans=0;
	for(int hora=5;hora<=17;hora++){
		int chiva=0,van=0,camp=0,p_trans=0; //no se resetea p_esp porque se van acumulando!!
		p_esp+=hora*hora-24*hora+144;
		if(p_esp>=21){
			p_esp-=21;
			p_trans+=21;
			chiva=1;
		}
		if(p_esp>=11){
			p_esp-=11;
			p_trans+=11;
			van=1;
		}
		if(p_esp>=21){
			p_esp-=21;
			p_trans+=21;
			camp=1;
		}
	cout<<hora<<"       |      "<<p_trans<<"     |     "<<p_esp<<"    |   "<<chiva<<"   |   "<<van<<"   |   "<<camp<<endl;
	}
	return 0;
}



