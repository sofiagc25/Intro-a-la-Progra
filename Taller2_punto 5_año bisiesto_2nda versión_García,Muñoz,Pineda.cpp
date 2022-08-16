/* GARCÍA, MUÑOZ, PINEDA
Este programa determina si un año es bisiesto o no
Segunda versión simplificada con el uso de AND y OR*/

#include <iostream>
using namespace std;

int main ()
{
	int y;
	int p1, p2,p3;
	
	cout << "Este programa le indica si el año que usted inserta es bisiesto o no" << endl;
	cout << "Ingrese un ano: " << endl;
	cin >> y;

	p1= y%400;
	p2= y%100;
	p3= y%4;
	
	if ((p1==0)||((p2!=0)&&(p3==0))) //si el año pertenece al conjunto cuyo módulo 400 es 0 (y%400==0) O (||) al conjunto cuyo módulo 100 es diferente de 0(y%100!=0) Y (&&) su módulo 4 es igual a 0 (y%4==0)
	{
		cout << "El ano " << y << " es bisiesto" << endl;	
	}
	else
		cout << "El ano " << y << " no es bisiesto" << endl;
						

	return 0;
}

/*Primero se organizó el código de la siguiente manera:

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
Usando así condicionales, sin embargo la solución finalmente presentada emplea es más corta, motivo por el cual es la que usamos*/
