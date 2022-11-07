/*
*/
#include <iostream>
using namespace std;
int main(){
	int arsummul[5];
	int mul=1, sum=0;
	for(int i=0;i<5;i++){
		cout<<"Numero #"<<i+1<<": ";
		cin>>arsummul[i];
		mul=mul*arsummul[i];
		sum=sum+arsummul[i];		
	}
	cout<<"La suma es: "<<sum<<endl;
	cout<<"El producto es: "<<mul<<endl;
	return 0;
}
