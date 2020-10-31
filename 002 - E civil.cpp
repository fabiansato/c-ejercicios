#include<iostream>
using namespace std;

/* Se tiene un conjunto de N tarjetas. Cada una contiene una información para una persona: 
a) Número de senso. 
b) Sexo 
C) Edad 
d) Estado Civil "1- Soltero 2-Casado 3-viudo 4-divorciado". 
Elaborar un algoritmo que lea los datos e indique el numero de perosnas entre 16 y 21 años mujeres solteras. */
int main() {
	int senso;
	int sexo;
	int edad;
	int final;
	int ecivil;
	int ultimatarjeta=1;
	
	while (ultimatarjeta!=2) {
		cout << "Ingrese el numero de senso" << endl;
		cin >> senso;
		cout << "Ingrese el numero sexo 1 Femenino, 2 Masculino)" << endl;
		cin >> sexo;
		cout << "Ingrese edad" << endl;
		cin >> edad;
		cout << "Ingrese estado civil 1=Soltero/a, 2=Casado/a, 3=Viudo/a, 4=Divorciado/a" << endl;
		cin >> ecivil;
		if (sexo==1) {
			if (edad>=16 && edad<=21) {
				if (ecivil=1) {
					final = final+1;
				}
			}
		}
		cout << "¿Es la ultima tarjeta? Tipee 1 para seguir o 2 para terminar el conteo de tarjetas" << endl;
		cin >> ultimatarjeta;
	} 
	cout << "La cantidad de Mujeres de entre 16 y 21 años solteras es: " << final << endl;
	return 0;
}

