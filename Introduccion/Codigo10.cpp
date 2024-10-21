#include <iostream>
using namespace std;

int main()
{
	char voto = ' ';
	cout << "A favor s/n : ";
	cin >> voto;
	if (voto == 's' or voto == 'n' or voto == 'S' or voto == 'N')
	{
		cout << "voto valido :"
			<< endl;
	}
	else 
	{
		cout << "voto invalido : "
			<< endl;
	}

}
