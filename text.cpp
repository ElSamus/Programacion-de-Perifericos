#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string LeeTxt(string archivo) {
	string texto, linea;
	ifstream miArchivo(archivo);
	if(miArchivo.is_open()) {
		texto = "";
		while (getline(miArchivo, linea)) {
			texto += linea;
		}
		cout << texto;
		miArchivo.close();
	}
	return texto;
}

bool escribeTxt(string archivo, string txt) {
	bool resu = false;
	ofstream elArchivo(archivo);
	if (elArchivo.is_open()) {
		elArchivo << txt;
		elArchivo.close();
		resu = true;
	}
	return resu;
}

string capturaTxt() {
	stringstream ss;
	string nombre, paterno, materno;
	int edad;
	double peso;
	double estatura;
	cout << "ingresa nombre completo: " << endl;
	cin >> nombre;
	cin >> paterno;
	cin >> materno;
	cout << "ingresa edad: " << endl;
	cin >> edad;
	cout << "ingresa peso: " << endl;
	cin >> peso;
	cout << "ingresa estatura: " << endl;
	cin >> estatura;
	ss << nombre << " " << paterno << " " << materno << " " << edad << " " << peso << " " << estatura;
	return ss;
}

int main(){
	string a, b, c;
	int n;
	c = " ";
	cout << "Ingrese numero de veces: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Captura " << i + 1 << " personas" << endl;
		c += ") ";
		c += capturaTxt();
	}
	a = "archivo.txt";
	escribeTxt(a, c);
	b = LeeTxt(a);
	cout << endl << a << endl;
	cout << b << endl;
	return 0;
}