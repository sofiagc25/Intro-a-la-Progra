/* GARCÍA, MUÑOZ, PINEDA
Países limitrofes y translimitrofes */
#include <iostream>
#include <string>
using namespace std;
const int columnas=2;
const int filaspaises=9;
const int paisesexistentes=6;
string limitrofes(string country1,string country2,string matrix[][columnas],int rows);
void qlimitrofes(string country1,string existing[paisesexistentes],int qexisting,string matrix[][columnas],int rows);
void partranslimitrofes(string existing[paisesexistentes],int qexisting, string matrix[][columnas],int rows);
int main(){
	string paises[][columnas]={"Argentina","Chile","Argentina","Bolivia","Bolivia","Peru","Bolivia","Chile","Bolivia","Brasil","Brasil","Venezuela","Brasil","Peru","Brasil","Argentina","Chile","Peru"};
	string existen[paisesexistentes]={"Argentina","Bolivia","Brasil","Chile","Peru","Venezuela"};
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
	}
	string pais1,pais2;
	cout<<endl;///*
	cout<<"Inserte el pais 1: ";
	cin>>pais1;
	cout<<"Inserte el pais 2: ";
	cin>>pais2;
	cout<<"Son limitrofes?: "<<limitrofes(pais1,pais2,paises,filaspaises)<<endl;
	cout<<endl;
	cout<<"Inserte un pais: ";
	cin>>pais1;
	qlimitrofes(pais1,existen,paisesexistentes,paises,filaspaises);
	cout<<endl;//*/
	for(int i=0;i<paisesexistentes;i++){
		cout<<existen[i]<<" ";
	}
	cout<<endl<<endl;
	partranslimitrofes(existen,paisesexistentes,paises,filaspaises);
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
void qlimitrofes(string country1,string existing[paisesexistentes],int qexisting,string matrix[][columnas],int rows){
	int qlimitrofes=0;
	for(int i=0;i<paisesexistentes;i++){
		if(country1!=existing[i]&&limitrofes(country1,existing[i],matrix,rows)=="true"){
			qlimitrofes=qlimitrofes+1;
		}
	}
	cout<<country1<<": "<<qlimitrofes;
	return;
}
void partranslimitrofes(string existing[paisesexistentes],int qexisting, string matrix[][columnas],int rows){
	for(int i=0;i<qexisting-1;i++){
		for(int j=0;j<qexisting;j++){
			if(limitrofes(existing[i],existing[j],matrix,rows)=="true"&&j!=i){
				for(int k=0;k<qexisting;k++){
					if(limitrofes(existing[j],existing[k],matrix,rows)=="true"&&limitrofes(existing[i],existing[k],matrix,rows)=="false"&&k!=i&&k!=j){
						cout<<existing[i]<<" - "<<existing[k]<<endl;
					}
				}
			}
		}
	}
	return;
}
