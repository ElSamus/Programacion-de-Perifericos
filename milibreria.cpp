#include "stdafx.h"
#include "MiLibreria.h"
#include <stdexcept>

using namespace std;

namespace MiLibreria {
	double Funciones::Suma(double a, double b) {
		return a + b;
	}
	double Funciones::Resta(double a, double b) {
		return a - b;
	}
	double Funciones::Multiplicacion(double a, double b) {
		return a * b;
	}
	double Funciones::Division(double a, double b) {
		return a / b;
	}
};