/* GARC�A, MU�OZ, PINEDA
	Determinar cu�l n�mero es el mayor y dividirlo por el menor*/

#include <iostream>
using namespace std;

int main () {
	cout << "Este programa divide dos numeros de manera que sea el n�mero mayor dividido el numero menor" << endl;
	double ma, me;
	double d1, d2;
	cout << "Ingrese un numero." << endl;
	cout << "Primer numero: ";
	cin >> ma;
	cout << "Ingrese otro numero." << endl;
	cout << "Segundo numero: ";
	cin >> me;
	
	if (ma>=me) {//ma es mayor o igual a me 
	d1=ma/me;
	cout <<"El resultado de la division es " << d1 << endl;
	}
	else {//me es mayor a ma 
	d2=me/ma;
	cout <<"El resultado de la division es " << d2 << endl;
	}
	
	return 0;
}
	
