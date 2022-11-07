/* GARCÍA, MUÑOZ, PINEDA
Acumulación de lluvias por depto. y mes*/
#include <iostream>
#include <cstdlib>
using namespace std;
const int deptos=32;
const int meses=12;
const int expertos=15;
void printmatrix(float matrix[][meses],int depments,int months);
struct Meteo{
	int ID;
	float pred[deptos];
	int mesmas;
};
void printmeteo(Meteo aimprimir);
int rainymonth(float matrix[][meses],int depments,int months);
int acertados(float matrix[][meses],int depments,int months,Meteo group[],int experts,int rainiest,int IDs[]);
int main(){
	//int deptos=4,meses=4;
	float info[deptos][meses];
	Meteo grupo[expertos];
	for(int i=0;i<deptos;i++){  //llenar matriz de información (aleatoriamente)
		for(int j=0;j<meses;j++){
			info[i][j]=rand()%148;
		}
	}
	printmatrix(info,deptos,meses);
	for(int i=0;i<expertos;i++){
		grupo[i].ID=rand()%10000;
		for(int j=0;j<deptos;j++){
			grupo[i].pred[j]=rand()%700;
		}
		grupo[i].mesmas=rand()%(meses+1);
	}
	for(int i=0;i<expertos;i++){
		printmeteo(grupo[i]);
		cout<<endl;
	}
	cout<<"Mes mas lluvioso: "<<rainymonth(info,deptos,meses)<<endl;
	int IDacertados[expertos];
	acertados(info,deptos,meses,grupo,expertos,rainymonth(info,deptos,meses),IDacertados);
}
void printmatrix(float matrix[][meses],int depments,int months){
	cout<<"Mes:        |";
	for(int i=0;i<meses;i++){
		if(i<9){
			cout<<" ";
		}
		cout<<"  "<<i+1<<"|";
	}
	cout<<endl;
	cout<<"_____________";
	for(int i=0;i<meses;i++){
		cout<<"_____";
	}
	cout<<endl;
	for(int i=0;i<depments;i++){
		cout<<"Depto. "<<i+1<<"   ";
		if(i<9){
			cout<<" ";
		}
		cout<<"|";	
		for(int j=0;j<months;j++){
			/*if(matrix[i][j]<100000){
				cout<<" ";
			}
			if(matrix[i][j]<10000){
				cout<<" ";
			}*/
			if(matrix[i][j]<1000){
				cout<<" ";
			}
			if(matrix[i][j]<100){
				cout<<" ";
			}
			if(matrix[i][j]<10){
				cout<<" ";
			}
			cout<<matrix[i][j]<<"|";
			/*if(j<products-1){
				cout<<"$";
			}*/
		}
		cout<<endl;
	}
	cout<<"_____________";
	for(int i=0;i<meses;i++){
		cout<<"_____";
	}
	cout<<endl;
	return;
}
void printmeteo(Meteo aimprimir){
	cout<<"ID: "<<aimprimir.ID<<endl;
	for(int i=0;i<deptos;i++){
		cout<<"Dep"<<i+1<<": "<<aimprimir.pred[i]<<endl;
	}
	//cout<<endl;
	cout<<"mesMas: "<<aimprimir.mesmas<<endl;
}
int rainymonth(float matrix[][meses],int depments,int months){
	float aux[months];
	for(int i=0;i<meses;i++){
		float sum=0;
		for(int j=0;j<depments;j++){
			sum=sum+matrix[j][i];
		}
		aux[i]=sum;
	}
	/* for(int i=0;i<months;i++){
		cout<<"Suma mes "<<i+1<<": ";
		if(i+1<10){
			cout<<" ";
		}
		cout<<aux[i]<<endl;
	}*/ 
	int maslluvia=0;
	float vmaslluvia; //mes más lluvioso y lluvia en ese mes
	for(int i=0;i<months;i++){
		if(aux[i]>=vmaslluvia){
			maslluvia=i+1;
			vmaslluvia=aux[i];
		}
	}
	return maslluvia;	
}
int acertados(float matrix[][meses],int depments,int months,Meteo group[],int experts,int rainiest,int IDs[]){
	int condacertados=0;
	for(int i=0;i<experts;i++){
		int cri=1; //1= acertado
		for(int j=0;j<depments&&cri==1;j++){
			float sum=0;
			for(int k=0;k<months;k++){
				sum=sum+matrix[j][k];
			}
			cout<<"Suma depto "<<j+1<<" dio "<<sum<<", menos la prediccion del experto "<<i+1<<"("<<group[i].pred[j]<<") = "<<sum-group[i].pred[j]<<endl;
			if(sum-group[i].pred[j]<-50||sum-group[i].pred[j]>50){ //diferencia en un rango de -50 a 50
				cri=0;
			}
			cout<<"Criterio: "<<cri<<endl;
		}
		//cout<<endl;
		if(cri==1){
			IDs[condacertados]=group[i].ID;
			condacertados=condacertados+1;
		}
	}
	cout<<"Acertados: "<<condacertados<<endl;
	//cout<<"Mes mas lluvioso: "<<rainiest;
	if(condacertados>0){
		cout<<endl;
		cout<<"IDs de los acertados: "<<endl;
		for(int i=0;i<condacertados;i++){
			cout<<IDs[i]<<endl;
		}
		cout<<endl;		
	}
	return condacertados;	
}

