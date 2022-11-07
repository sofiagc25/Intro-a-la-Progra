/*
*/
#include <iostream>
using namespace std; 
int main(){
	int arpri[25];
	int posarpri=0, res;
	for(int i=1;i<=100;i++){
		int cond=0;
		for(int j=1;j<=i;j++){
			res=i%j;
			if(res==0){
				cond=cond+1;
			}
		}
		if(cond==2){
			//cout<<i<<endl;
			arpri[posarpri]=i;
			posarpri=posarpri+1;
		}
	}
	for(int posarpri=0;posarpri<25;posarpri++){
		cout<<posarpri+1<<" : "<<arpri[posarpri]<<endl;
	}
	return 0;
}


