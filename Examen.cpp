/**********************************************************************************************************************
*                       UNIVERCIDAD POLITECNICA DE TULANCINGO
*                      ING. ELECTRONICA Y TELECOMUNICACIONES
*  Samuel Castelan Bautista
*  Este programa tiene el examen de hoy
***********************************************************************************************************************/
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

class persona {
	string nombre;
	int edad;
	char genero;
	string direccion;
	string telefono;
	string email;
	string muestra;
		
public:
	string LeeTxt(string archivo);
	void LeeArchivo(); 
	string muestraGen();
	
};


string persona::LeeTxt(string archivo) {
	string texto, linea;
	ifstream miArchivo(archivo);
	if (miArchivo.is_open()) {
		texto = "";
		texto += linea;
		while (getline(miArchivo, linea)) {
			texto += linea;
		}
	}
		miArchivo.close();
	return texto;
}

void persona::LeeArchivo(); string muestraGen() {
	string token, txt;
	token=LeeTxt("C:\\Users\\USUARIO\\Desktop\\holi.txt");
	/*cout << token;*/
	string delimita = ",";
	size_t pos = 0;
	while ((pos = token.find(delimita)) != string::npos) {
		txt = token.substr(0, pos);
		cout << txt<<endl;
		token.erase(0, pos + delimita.length());
	}
	if (genero == 'M')
		return "Hombre";
	else
		return "Mujer";
	
}

int main()
{
	persona Gearardo;
	Gerardo.LeeArchivo();muestraGen();
}
