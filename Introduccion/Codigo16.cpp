#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numeros[10]{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
	vector <int> vnum
	{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
	int mayor = -1;
	for (int i = 0; i <= 9; i++)
	{
		if (vnum[i] > mayor)
		{
			mayor = vnum[i];
		}
	}
	cout << "El mayor es: " << mayor << endl;
}
