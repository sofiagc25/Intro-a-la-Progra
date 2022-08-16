/* GARCÍA, MUÑOZ, PINEDA
Este programa determina si un año es bisiesto o no
Primera versión*/

#include <iostream>
using namespace std;

int main ()
{
	int y;
	int p1, p2,p3;
	
	cout << "Ingrese un ano: " << endl;
	cin >> y;

	p1= y%400;
	if (p1==0)
		cout << "El ano " << y << " es bisiesto" << endl;	
	else{
		p2= y%100;
		if (p2==0)
		cout << "El ano " << y << " no es bisiesto" << endl;
		else{
			p3= y%4;
			if (p3==0)
				cout << "El ano " << y << " es bisiesto" << endl;
			else
				cout << "El ano " << y << " no es bisiesto" << endl;
		}
	}
	return 0; 
}
