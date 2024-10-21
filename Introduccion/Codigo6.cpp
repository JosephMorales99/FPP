#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	cout << "10 ";
	cin >> num;
	cout << endl;
	if (num % 2 == 0)
	{
		cout << "par " << endl;

	}
	else // nunca lleva condicion 
	{
		cout << "impar" << endl;
	}
}
