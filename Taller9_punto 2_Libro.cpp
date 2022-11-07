/* MUÑOZ
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	struct libro{
		string titulo;
		string autor;
		int year;
		string color;
	};
	libro registro[3];
	for(int i=0;i<5;i++){
		cout<<"Paciente "<<i+1<<":"<<endl;
		cout<<"Titulo: ";
		cin>>registro[i].titulo;
		cout<<"Autor: ";
		cin>>registro[i].autor;
		cout<<"Year: ";
		cin>>registro[i].year;
		cout<<"color: ";
		cin>>registro[i].color;
	}
	return 0;
}
