#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

	typedef struct alumno {
	string codigo;
	string nombre;
	int edad;
}talumno;



int main()
{

	for (int n = 0; n < 5; n++) {
		talumno* apt;
		vector <talumno> listado;
		apt = new talumno;
		cout << endl << " Captura datos de alumno" << endl;
		cout << " Caputura el codigo: ";
		cin >> apt->codigo;
		cout << " Captura el nombre: ";
		cin >> apt->nombre;
		cout << " Captura edad: ";
		cin >> apt->edad;
		listado.push_back(*apt);


		cout << endl;
		for (talumno x : listado) {
			cout << " codigo: " << x.codigo << "    Nombre: " << x.nombre << "   Edad: " << x.edad << endl;
		}
	}
	system("pause");
	return 0;
}