#include <iostream>
using namespace std;

// Las calses se declaran fuera de cualquuier funcion
class Jugador
{
public:
	string id; // Identificador del jugador
	int vida;
	int ataque;
	// Un constructor genera un objeto o instancia de una clase
	//Un constructor tiene el nombre de la clase
	Jugador(string id1, int vida1, int ataque1)
	{
		this->id = id1;
		this->vida = vida1;
		this->ataque = ataque1;
	}
	string getId()const
	{
		return id;
	}
	int getVida()const
	{
		return vida;
	}
};
int main()
{
	Jugador link("Link ", 100, 20);
	cout << "Nombre: " << link.getId() << endl;
	cout << "Vida: " << link.getVida() << endl;
}
