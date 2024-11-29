#include <iostream>
using namespace std;

int main()
{
  // 1. Ejercicio #1 Realice el programa en C++ que solicite un número e imprima el numero multiplicado por 10 y esto lo seguirá haciendo hasta que el usuario ingrese un cero. Utilice el arreglo preconstruido.
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
  //2. Ejercicio #2 Realice el programa en C++ que encuentre el mayor elemento de un arreglo de tipo entero. Utilice el arreglo preconstruido

  //3. Ejercicio #3 Realice el programa en C++ que encuentre el menor elemento de un arreglo de tipo entero. Utilice el arreglo preconstruido.

  //4. Ejercicio #4 Realice el programa en C++ calcule el promedio de los elementos de un arreglo de tipo entero. Utilice el arreglo preconstruido.

  //5. Ejercicio #5 Realice el programa en C++ que encuentre el segundo mayor elemento de un arreglo. Utilice arreglo preconstruido.

  //6. Ejercicio #6. Realice el programa en C++ que cuente el número de elementos pares e impares de un arreglo preconstruido.

  //7. Ejercicio #7. Realice el programa en C++ que imprima las tablas de multiplicar del numero solicitado hasta 10 veces.

  //8. Ejercicio #8 Realice el programa en C++ que encuentre los tres mayores elementos de un arreglo de 1000 elementos generados de forma aleatoria de tipo entero. Utilice el arreglo preconstruido.

  //9. Ejercicio #9 Realice el programa en C++ que encuentre el segundo menor elemento de un arreglo de 1000 elementos de tipo double de forma aleatoria. Utilice el arreglo preconstruido.

  //10. Ejercicio #10 Realice el programa en C++ que invierta los valores de un arreglo de 10 elementos de tipo entero de forma aleatoria. Utilice el arreglo preconstruido.

}
