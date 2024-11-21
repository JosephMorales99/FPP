#include <iostream>
using namespace std;

int main()
{
  // 1. arreglo, asignar valores aleatorios
	srand(time(NULL)); //semillas
	int arreglo[10];
	for (int i = 0; i <= 9; i++)
	{
		arreglo[i] = rand() % 101;
	}
	for (int elemento : arreglo)
	{
		cout << elemento << endl;
	}
}
