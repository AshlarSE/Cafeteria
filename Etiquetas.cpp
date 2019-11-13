#include <iostream>

using namespace std;
int color;

int main ()
{
	string etiquetas[4] = {"rojo","azul","amarillo","morado"};
	float precio = 0;
	cout<< "Introduzca el precio.";
	cin>> precio;
	cout<< "Introduzca la etiquetas: \n 1.Rojo 2.Azul 3.Amarillo 4.Morado";
	cin>> color;
	switch(color){
		case 1:
			//10%
			cout<< etiquetas[0];
			precio *= .90;
			break;
		case 2:
			//30%
			cout<< etiquetas[1];
			precio *= .70;
			break;
		case 3:
			//50%
			cout<< etiquetas[2];
			precio *= .50;
			break;
		case 4:
			//70%
			cout<< etiquetas[3];
			precio *= .30;
			break;
		default:
			cout<<"No valido";
			
	cout<<precio;
	}
	
	
}

	

