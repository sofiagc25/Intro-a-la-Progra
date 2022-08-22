/* GARCÍA, MUÑOZ, PINEDA
  maquina expendedora */
#include <iostream>
using namespace std;

int main(){
	int VI, op, P, V, VD, C5, C2, C1; //valor ingresado, opción elegida, Precio de la opci{on, vueltas por dar, valor devuelto, contador monedas de 500, "" 200, "" 100
  cout<<"Valor ingresado: $";
  cin >> VI;
  VD=0;
  C5=0;
  C2=0;
  C1=0;
  if((VI>=200)&&(VI<=2500)){
	cout<<"Máquina Dispensadora El Puente"<<endl;
    cout<<"(1) Papas Fritas $1200"<<endl;
    cout<<"(2) Sándwich Combinado $2500"<<endl;
    cout<<"(3) Pescadito $1800"<<endl;
    cout<<"(4) Empanada $1700"<<endl;
    cout<<"(5) Arepa $2000"<<endl;
    cout<<"(6) Gaseosa $1600"<<endl;
    cout<<"(7) Vaso de Té $1000"<<endl;
    cout<<"(8) Dulce $200"<<endl;
    cout<<"(9) Salir"<<endl;
    cout<<"Elija el numero del respectivo producto: ";
    cin>>op;
	if((op>=1)&&(op<=9)){
		if((op>=1)&&(op<=8)){
			switch (op){
				case 1:{
          			P=1200;
          			cout<<"Opcion elegida: Papas Fritas."<<endl;
          			break;}
        		case 2:{
          			P=2500;
          			cout<<"Opcion elegida: Sandwich Combinado."<<endl;
          			break;}
        		case 3:{
		          	P=1800;
		          	cout<<"Opcion elegida: Pescadito."<<endl;
		          	break;}
        		case 4:{
          			P=1700;
          			cout<<"Opcion elegida: Empanada."<<endl;
          			break;}
        		case 5:{
          			P=2000;
          			cout<<"Opcion elegida: Arepa."<<endl;
          			break;}
        		case 6:{
          			P=1600;
          			cout<<"Opcion elegida: Gaseosa."<<endl;
          			break;}
        		case 7:{
          			P=1000;
          			cout<<"Opcion elegida: Vaso de Té."<<endl;
          			break;}
        		case 8:{
          			P=200;
          			cout<<"Opcion elegida: Dulce."<<endl;
          			break;}
        		default:{
          			cout<<"IMPOSIBLE"<<endl;} 
        	} //Fin del Switch
		V=VI-P; //Vueltas por dar 
		cout<<"Valor a devolver: $"<<V<<endl;
			if (V>0){
				for(;V>=500;V=V-500){
					VD=VD+500;
		            C5=C5+1;
				} 
				for(;V>=200; V=V-200){
					VD=VD+200;
		            C2=C2+1;
				} 
				for(;V>=100;V=V-100){
					VD=VD+100;
		            C1=C1+1;
				} 
				cout<<"Se devuelven "<<C5<<" moneda(s) de $500, "<<C2<<" moneda(s) de $200 y "<<C1<< " moneda(s) de $100"<<endl;
				cout<<"valor total devuelto: $"<<VD<<endl;
			}  
		else{
			if (V==0){
				cout<<"Valor exacto, no hay vueltas."<<endl;
			}
			else {
				cout<<"Dinero insuficiente. Intente de nuevo"<<endl;
				cout<<"Se devuelve "<<VI<<endl;
			}
		}
		}
	else {
        cout<<"Opcion elegida: salir";
      }  
	}
	else{
		cout<<"Opcion elegida no valida"<<endl;
	}
  }
  else{
    cout<<"Valor ingresado no valido";
  }
 return 0; 
}
  
  
