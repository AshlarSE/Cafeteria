#include <stdio.h>
#include <iostream>
using namespace std;
float saldos[]={100.0, 90.0, 50.0, 95.0, 80.0};	

void Abonar(int n)
{
	int nvoSaldo = 0;
	cout<<"Ingrese cantidad a abonar";
	cin>>nvoSaldo;
	saldos[n-1]= nvoSaldo + saldos[n-1];
	cout<<"Abono exitoso";
	cout<<"Nuevo Saldo: "<<saldos[n-1];
}

void Comprar(int n)
{
	float articulo = 0;
	cout<<"Ingresar valor del artículo";
	cin>>articulo;
	float saldo= saldos[n-1];
	if(articulo>saldo)
	{
		cout<<"Saldo Insuficiente";
	} else {
		saldos[n-1]= saldo - articulo;
		cout<<"Compra Exitosa";
		cout<<"Saldo Actual" << saldos[n-1];
	}
	
}

void seleccionarAccion(int n)
{ 
	int seleccion = 0;
	cout<<"¿Qué deseas hacer?: 1.Abonar 2.Comprar";
	cin>> seleccion;
	switch(seleccion){
		case 1:
			Abonar(n);
			break;
		case 2:
			Comprar(n);
			break;
		default:
			cout<<"Opción Inválida";
			break;
	}
	
}

void buscarCliente(int n)
{
string clientes[]={"Martha","Ashlar","Marco","Lalo","Maggie"};

cout<<"Nombre: "<< clientes[n-1] <<endl;
cout<<"Saldo actual: "<< saldos[n-1]<<endl;
seleccionarAccion(n);
}


int main(){
	int numCliente = 0;
	cout<<"Ingrese num. del cliente";
	cin>>numCliente;
	buscarCliente(numCliente);
	
//	finalizarAtencion();
}
