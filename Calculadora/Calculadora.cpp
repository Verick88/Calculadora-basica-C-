// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	char operador;
	double num1, num2;

	//Aca se le pide al usuario que ingrese el operador (suma, resta, multiplicacion, division)
	cout << "Ingrese un operador (+,-,*,/): ";
	cin >> operador;

	//Ingrese los numeros
	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	//Realizar la operacion segun el operador identificado
	switch (operador) {
	case '+':
		cout << "resultado: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "resultado: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "resultado: " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0) {
			cout << "resultado: " << num1 / num2 << endl;
		}
		else {
			cout << "Math ERROR" << endl;
		}
		break;
	default:
		cout << "Operador no valido." << endl;
		break;
	}
	return 0;
}


