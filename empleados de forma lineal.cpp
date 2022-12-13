#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void crear_archivo();
int main(){
	crear_archivo();
	return 0;
}

void crear_archivo(){
	ofstream archivo;
	string nombre;
	string apellido;
	string puesto;
	int sueldo;
	int bonificacion;
	int sueldo_total;
	archivo.open("archivo.txt",ios::out);
	
	
	if (archivo.fail()){
	cout<<"No se pudo abrir o crear el archivo";
	exit(1);
	}
	else{
	cout << "cual es tu nombre: ";
	getline(cin,nombre);
	archivo <<nombre<<endl;
	cout << "cual es tu apellido: ";
	getline(cin,apellido);
	archivo <<apellido<<endl;
	cout << "cual es tu puesto: ";
	getline(cin,puesto);
	archivo <<puesto<<endl;
	cout << "cual es su sueldo: ";
	cin >>sueldo;
	archivo <<sueldo<<endl;
	cout << "cual es su bonificacion: ";
	cin>>bonificacion;
	archivo <<bonificacion<<endl;
	sueldo_total = sueldo + bonificacion;
	cout << "los resultados son: " << nombre << " , " << apellido << " , " << puesto << " , " << sueldo << " , " << bonificacion << " , " << sueldo_total << " , " << endl;
	}
	
	archivo.close();
}
