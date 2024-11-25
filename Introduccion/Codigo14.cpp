#include <iostream>
using namespace std;

int main()
{
	int numeros[10];
	int num, i = 0;
	num = -1;
	while (num != 0)
	{
		cout << "numero: ";
		cin >> num; 
		if (num == 0 and i > 9)
		{
			break;
		}
		numeros[i] = num; 
		i++;
	}
	for (int elemento : numeros)
	{
		cout << elemento << endl;
	}
	
}
