/*
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int arrandmay[200];
	int may, conmay;
	for(int i=0;i<200;i++){
		arrandmay[i]=rand()%21;
	}
	for(int i=0;i<200;i++){
		cout<<i+1<<" : "<<arrandmay[i]<<endl;
	}	
	may=arrandmay[0];
	for(int i=0;i<200;i++){
		if(arrandmay[i]>=may){
			may=arrandmay[i];
		}
	}
	cout<<"El mayor es "<<may<<endl;
	conmay=0;
	for(int i=0;i<200;i++){
		if(arrandmay[i]==may){
			conmay=conmay+1;
		}
	}
	cout<<"La cantidad de veces que se repite "<<may<<" es: "<<conmay<<endl;
	return 0;
}
