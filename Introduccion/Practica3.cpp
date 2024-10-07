#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	// EJERCICIO 4
	// introducir una linea completa de texto (string)
	//cin.ignore(); //Ignora la instruccion cin, cuando hay "cin >>" anteriores a esta linea de codigo
	string nombreCompleto;
	cout << "Introduce tu nombre completo: ";
	getline(cin, nombreCompleto); // Obtiene una linea completa de texto
	cout << "Tu nombre comp´leto: " << nombreCompleto << endl;

	// EJERCICIO 5
	//De que tamaño es un string
	cout << "La Longitud del texto es: " << nombreCompleto.length() << endl;

	// EJERCICIO 6
	//Como acceder a un caracter especifico de un texto (String)
	// [] = Operador Indice
	cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

	// EJERCICIO 7
	// Cambiar un caracter especifico en un texto (String)
	string cambio = "Hola";
	cambio[0] = 'h';
	cout << cambio << endl; 

	//EJERCICIO 8 
	// Convertir un string a MAYUSCULAS 
	string textoMinusculas = "texto a convertir";
	transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);

	//EJERCICIO 9
	// Convertir un string a minusculas 
	string textoMayusculas = "TEXTO A CONVERTIR";
	transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), toupper);

	// EJERCICIO 10 
	// Insertar un texto dentro de otro texto 
	string textoPrincipal = "Jose, ";
	textoPrincipal.insert(6, "Luis");
	cout << textoPrincipal << endl; 

	// EJERCICIO 11
	//Revertir un texto 
	string textoRevertir = "Hola Mundo!";
	reverse(textoRevertir.begin(), textoRevertir.end());

	//EJERCICIO 12
	// Convertir un numero a un string
	int n1 = 123;
	string numeroAtexto = to_string(n1);
	cout << "Numero como string: " << numeroAtexto << endl;

	//EJERCICIO 13
	//Convertir un string a numero 
	string textoAnumero = "123";
	int n2 = stoi(textoAnumero);
	cout << "String como numero: " << n2 << endl;
}
