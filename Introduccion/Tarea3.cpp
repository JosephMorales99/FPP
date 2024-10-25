#include <iostream>
using namespace std;

int main()
{
	double peso, estatura; // Variables de entrada
	double mc;             // Variables de salida
	cout << "peso? ";
	cin >> peso; 
	cout << endl; // salto de linea 
	cout << "estatura? ";
	cin >> estatura;
	cout << endl; 
	mc = peso / (estatura * estatura);
	cout << "mc ;" << mc << endl; 
	if (mc < 18.5) {
		cout << "Tu peso es bajo " << endl;
	}
	if (mc >= 18.5 and mc > 25)
	{
		cout << "Peso es normal " << endl; 
	}
}
