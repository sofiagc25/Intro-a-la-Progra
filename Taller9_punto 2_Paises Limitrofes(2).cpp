/* GARCÍA, MUÑOZ, PINEDA
Países limitrofes y translimitrofes */
#include <iostream>
#include <string>
using namespace std;
const int columnas=2;
const int filaspaises=9;
const int paisesexistentes=6;
struct Pais{
	string nombre;
	int cantidadlim;
	bool translim[paisesexistentes];	
};
string limitrofes(string country1,string country2,string matrix[][columnas],int rows);
int qlimitrofes(string country1,Pais existing[paisesexistentes],int qexisting,string matrix[][columnas],int rows);
void partranslimitrofes(Pais existing[paisesexistentes],int qexisting, string matrix[][columnas],int rows);
int main(){
	string paises[][columnas]={"Argentina","Chile","Argentina","Bolivia","Bolivia","Peru","Bolivia","Chile","Bolivia","Brasil","Brasil","Venezuela","Brasil","Peru","Brasil","Argentina","Chile","Peru"};
	Pais existen[paisesexistentes];
	existen[0].nombre="Argentina";
	existen[1].nombre="Bolivia";
	existen[2].nombre="Brasil";
	existen[3].nombre="Chile";
	existen[4].nombre="Peru";
	existen[5].nombre="Venezuela";
	for(int i=0;i<paisesexistentes;i++){
		for(int j=0;j<paisesexistentes;j++){
			existen[i].translim[j]=(1<0);
		}
	}/*
	for(int i=0;i<paisesexistentes;i++){
		cout<<existen[i].nombre<<": ";
		for(int j=0;j<paisesexistentes;j++){
			cout<<existen[i].translim[j]<<" ";
		}
		cout<<endl;
	}//*/
	for(int i=0;i<filaspaises;i++){
		for(int j=0;j<columnas;j++){
			cout<<paises[i][j];
			if(paises[i][j]!="Argentina"&&paises[i][j]!="Venezuela"){
				cout<<"  ";
				if(paises[i][j]!="Bolivia"){
					cout<<" ";
					if(paises[i][j]!="Brasil"){
						cout<<" ";
						if(paises[i][j]!="Chile"){
							cout<<" ";
						}
					}
				}
			}			
			cout<<"|";
		}
		cout<<endl;
	}///*
	string pais1,pais2;
	cout<<endl;
	cout<<"Funcion limitrofes? true o false:"<<endl;
	cout<<"Inserte el pais 1: ";
	cin>>pais1;
	cout<<"Inserte el pais 2: ";
	cin>>pais2;
	cout<<"Son limitrofes?: "<<limitrofes(pais1,pais2,paises,filaspaises)<<endl;
	cout<<endl;
	cout<<"Funcion cantidad de paises con los que es limitrofe un pais: "<<endl;
	cout<<"Inserte un pais: ";
	cin>>pais1;
	qlimitrofes(pais1,existen,paisesexistentes,paises,filaspaises);
	cout<<endl;
	cout<<"Cantidad de paises limitrofes de cada pais: "<<endl;
	for(int i=0;i<paisesexistentes;i++){
		existen[i].cantidadlim=qlimitrofes(existen[i].nombre,existen,paisesexistentes,paises,filaspaises);
	}
	cout<<endl;//*/
	cout<<"Nombres en el arreglo de paises existentes: ";
	for(int i=0;i<paisesexistentes;i++){
		cout<<existen[i].nombre<<" ";
	}
	cout<<endl<<endl;
	cout<<"Funcion parejas de paises translimitrofes: "<<endl;
	partranslimitrofes(existen,paisesexistentes,paises,filaspaises);
	cout<<endl;/*
	for(int i=0;i<paisesexistentes;i++){
		cout<<existen[i].nombre;
		if(existen[i].nombre!="Argentina"&&existen[i].nombre!="Venezuela"){
			cout<<"  ";
			if(existen[i].nombre!="Bolivia"){
				cout<<" ";
				if(existen[i].nombre!="Brasil"){
					cout<<" ";
					if(existen[i].nombre!="Chile"){
						cout<<" ";
					}
				}
			}
		}
		cout<<": ";
		for(int j=0;j<paisesexistentes;j++){
			cout<<existen[i].translim[j]<<" ";
		}
		cout<<endl;
	}//*/
	return 0;
}
string limitrofes(string country1,string country2,string matrix[][columnas],int rows){ //son limitrofes? true o false
	bool lim=0;
	for(int i=0;i<filaspaises;i++){
		for(int j=0;j<columnas;j++){
			if(matrix[i][j]==country1){
				/*if(i>0&&lim==0){
					lim=(matrix[i-1][j]==country2);             Esto se haría si las adyacentes verticalmente también contaran
				}*/
				if(j>0&&lim==0){
					lim=(matrix[i][j-1]==country2);
				}
				/*if(i<filaspaises-1&&lim==0){                  Esto se haría si las adyacentes verticalmente también contaran
					lim=(matrix[i+1][j]==country2);
				}*/
				if(j<columnas-1&&lim==0){
					lim=(matrix[i][j+1]==country2);
				}
			}
		}
	}
	switch(lim){
		case 0:
			return "false";
			break;
		case 1:
			return "true";
			break;
		default:
			return "impossible";
			break;
	}
}
int qlimitrofes(string country1,Pais existing[paisesexistentes],int qexisting,string matrix[][columnas],int rows){
	int qlimitrofes=0;
	for(int i=0;i<paisesexistentes;i++){
		if(country1!=existing[i].nombre&&limitrofes(country1,existing[i].nombre,matrix,rows)=="true"){
			qlimitrofes=qlimitrofes+1;
		}
	}
	cout<<country1;
	if(qlimitrofes!=0){
		cout<<": "<<qlimitrofes<<endl;
	}
	else{
		cout<<" no tiene paises limitrofes"<<endl;
	}
	return qlimitrofes;
}
void partranslimitrofes(Pais existing[paisesexistentes],int qexisting, string matrix[][columnas],int rows){
	for(int i=0;i<qexisting;i++){
		for(int j=0;j<qexisting;j++){
			if((limitrofes(existing[i].nombre,existing[j].nombre,matrix,rows)=="true")&&(i!=j)){
				//cout<<i<<" y "<<j<<" son limitrofes "<<endl;
				for(int k=0;k<qexisting;k++){
					if((limitrofes(existing[k].nombre,existing[j].nombre,matrix,rows)=="true")&&(j!=k)){
						//cout<<" "<<j<<" y "<<k<<" son limitrofes "<<endl;
						if((k!=i)&&(limitrofes(existing[k].nombre,existing[i].nombre,matrix,rows)=="false")){
							//cout<<"  "<<k<<" es diferente de "<<i<<endl;
							existing[i].translim[k]=(1>0);
						}
					}
				}
			}
		}
	}///*
	for(int i=0;i<qexisting;i++){
		for(int j=i+1;j<qexisting;j++){
			if(existing[i].translim[j]==1){
				cout<<existing[i].nombre<<" - "<<existing[j].nombre<<endl;
			}
		}
	}//*/
	return;
}
