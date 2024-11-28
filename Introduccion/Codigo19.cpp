#include <iostream>
using namespace std;

//Funciones
void suma()
{
	int n1, n2;
	cout << "no 1";
	cin >> n1;
	cout << "no 2";
	cin >> n2;
	cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otra funcion 
int main() //Punto de entrada
{
	//hola(); //Esto es invocar o llamar la funcion 
	suma();
}
