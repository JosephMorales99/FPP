#include <iostream>
using namespace std;

int main()
{
	string nombreMeses[12]{ "Ene","Feb","Mar","Abr","May","Jun","Jul","Ago","Sept","Oct","Nov","Dic" };
	for (int i = 0; i < 12; i++)
	{
		cout << nombreMeses[i] << ", ";
	}
	cout << endl;

	string Planetas[8]{ "Mercurio", "Venus", "Tierra", "Marte", "Jupiter", "Saturno", "Urano", "Neptuno" };
	for (int i=0; i < 8; i++)
	{
		cout << Planetas[i] << ", ";
	}
	cout << endl;
}
