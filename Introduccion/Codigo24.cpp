#include <iostream>
using namespace std;

// Las calses se declaran fuera de cualquuier funcion
class Jugador
{
public:
	string id; // Identificador del jugador
	int vida;
	int potencia;
	// Un constructor genera un objeto o instancia de una clase
	//Un constructor tiene el nombre de la clase
	Jugador(string id1, int vida1, int potencia1)
	{
		this->id = id1;
		this->vida = vida1;
		this->potencia = potencia1;
	}
	string getId()const
	{
		return id;
	}
	int getVida()const
	{
		return vida;
	}
	int getPotencia()const
	{
		return potencia;
	}
	//setter
	void setId(string id1)
	{
		this->id = id1;
	}
	void setVida(int vida1)
	{
		this->vida = vida1;
	}
	void setPotencia(int potencia1)
	{
		this->potencia = potencia1;
	}
};
int main()
{
	Jugador link("Link ", 100, 20);
	cout << "Nombre: " << link.getId() << endl;
	cout << "Vida: " << link.getVida() << endl;
	cout << "Potencia: " << link.getPotencia() << endl;
}
