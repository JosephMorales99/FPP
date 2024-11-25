#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numeros[10]{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
	int numero, primero, segundo, tercero,
		temp = 0;
	primero = numeros[0];
	segundo = numeros[1];
	tercero = numeros[2];
	if (primero < segundo)
	{
		temp = primero;
		primero = segundo;
		segundo = temp;
	}
	if (primero < tercero)
	{
		temp = primero;
		primero = tercero;
		tercero = temp;
	}
	if (segundo < tercero)
	{
		temp = segundo;
		segundo = tercero;
		tercero = temp; 
	}
	for (int i = 3; i <= 9; i++)
	{
		if (numeros[i] > primero)
		{
			tercero = segundo;
			segundo = primero;
			primero = numeros[i];
		}
		else if
			(numeros[i] > tercero)
		{
			tercero = numeros[i];
		}
	}
	cout << primero << endl;
	cout << segundo << endl; 
	cout << tercero << endl;
}
