/* GARC�A, MU�OZ, PINEDA
Este programa determina si un a�o es bisiesto o no
Segunda versi�n simplificada con el uso de AND y OR*/

#include <iostream>
using namespace std;

int main ()
{
	int y;
	int p1, p2,p3;
	
	cout << "Este programa le indica si el a�o que usted inserta es bisiesto o no" << endl;
	cout << "Ingrese un ano: " << endl;
	cin >> y;

	p1= y%400;
	p2= y%100;
	p3= y%4;
	
	if ((p1==0)||((p2!=0)&&(p3==0))) //si el a�o pertenece al conjunto cuyo m�dulo 400 es 0 (y%400==0) O (||) al conjunto cuyo m�dulo 100 es diferente de 0(y%100!=0) Y (&&) su m�dulo 4 es igual a 0 (y%4==0)
	{
		cout << "El ano " << y << " es bisiesto" << endl;	
	}
	else
		cout << "El ano " << y << " no es bisiesto" << endl;
						

	return 0;
}

/*Primero se organiz� el c�digo de la siguiente manera:

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
Usando as� condicionales, sin embargo la soluci�n finalmente presentada emplea es m�s corta, motivo por el cual es la que usamos*/
