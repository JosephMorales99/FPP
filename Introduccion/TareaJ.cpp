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
int numeros[TAMANO];
    int numero, primero, segundo, tercero, temp = 0;
    // inicializar la semilla 
    srand(time(NULL));

    for (int i = 0; i <= TAMANO; i++) 
    {
        numeros[i] = rand() % 101;
    }
    primero = numeros[0];
    segundo = numeros[1];
    tercero = numeros[2];
    if (primero < segundo) 
    {
        int temp = primero;
        primero = segundo;
        segundo = temp;
    }
    if (primero < tercero) 
    {
        int temp = primero;
        primero = tercero;
        tercero = temp;
    }
    if (segundo < tercero) 
    {
        int temp = segundo;
        segundo = tercero;
        tercero = temp;
    }

    // Encontrar los tres mayores elementos
    for (int i = 3; i < TAMANO; i++) {
        if (numeros[i] > primero) 
        {
            tercero = segundo;
            segundo = primero;
            primero = numeros[i];
        }
        else if (numeros[i] > segundo) 
        {
            tercero = segundo;
            segundo = numeros[i];
        }
        else if (numeros[i] > tercero) 
        {
            tercero = numeros[i];
        }
    }

    cout << "Los tres mayores elementos son: " << primero << ", " << segundo << ", " << tercero << endl;
  //3. Ejercicio #3 Realice el programa en C++ que encuentre el menor elemento de un arreglo de tipo entero. Utilice el arreglo preconstruido.
int numeros[TAMANO];
    int numero, primero, segundo, tercero, temp = 0;
    // inicializar la semilla 
    srand(time(NULL));

    for (int i = 0; i <= TAMANO; i++) 
    {
        numeros[i] = rand() % 101;
    }
    primero = numeros[0];
    segundo = numeros[1];
    tercero = numeros[2];
    if (primero < segundo) 
    {
        int temp = primero;
        primero = segundo;
        segundo = temp;
    }
    if (primero < tercero) 
    {
        int temp = primero;
        primero = tercero;
        tercero = temp;
    }
    if (segundo < tercero) 
    {
        int temp = segundo;
        segundo = tercero;
        tercero = temp;
    }

    // Encontrar los tres menores elementos
    for (int i = 3; i < TAMANO; i++) {
        if (numeros[i] > primero) 
        {
            tercero = segundo;
            segundo = primero;
            primero = numeros[i];
        }
        else if (numeros[i] > segundo) 
        {
            tercero = segundo;
            segundo = numeros[i];
        }
        else if (numeros[i] > tercero) 
        {
            tercero = numeros[i];
        }
    }

    cout << "Los tres menores elementos son: " << primero << ", " << segundo << ", " << tercero << endl;
  //4. Ejercicio #4 Realice el programa en C++ calcule el promedio de los elementos de un arreglo de tipo entero. Utilice el arreglo preconstruido.
#include <iostream>
using namespace std;

int main() {
    // Arreglo preconstruido de tipo entero
    int numeros[] = {10, 20, 30, 40, 50}; // Puedes cambiar los valores si lo deseas
    int tamano = sizeof(numeros) / sizeof(numeros[0]); // Tamaño del arreglo
    
    int suma = 0; // Variable para almacenar la suma de los elementos
    
    // Calcular la suma de los elementos del arreglo
    for (int i = 0; i < tamano; i++) {
        suma += numeros[i];
    }
    
    // Calcular el promedio
    double promedio = static_cast<double>(suma) / tamano;
    
    // Imprimir el resultado
    cout << "El promedio de los elementos del arreglo es: " << promedio << endl;
}

  //5. Ejercicio #5 Realice el programa en C++ que encuentre el segundo mayor elemento de un arreglo. Utilice arreglo preconstruido.
#include <iostream>
#include <limits.h> // Para usar INT_MIN
using namespace std;

int main() {
    // Arreglo preconstruido de tipo entero
    int numeros[] = {10, 20, 5, 30, 25}; // Puedes cambiar los valores si lo deseas
    int tamano = sizeof(numeros) / sizeof(numeros[0]); // Tamaño del arreglo

    if (tamano < 2) {
        cout << "El arreglo debe tener al menos dos elementos." << endl;
        return 1;
    }

    // Inicializar las variables para el mayor y el segundo mayor
    int mayor = INT_MIN, segundoMayor = INT_MIN;

    // Recorrer el arreglo
    for (int i = 0; i < tamano; i++) {
        if (numeros[i] > mayor) {
            // Actualizar segundo mayor antes de cambiar el mayor
            segundoMayor = mayor;
            mayor = numeros[i];
        } else if (numeros[i] > segundoMayor && numeros[i] < mayor) {
            // Actualizar segundo mayor si es menor que el mayor
            segundoMayor = numeros[i];
        }
    }

    if (segundoMayor == INT_MIN) {
        cout << "No hay un segundo mayor elemento único en el arreglo." << endl;
    } else {
        cout << "El segundo mayor elemento del arreglo es: " << segundoMayor << endl;
    }

}

  //6. Ejercicio #6. Realice el programa en C++ que cuente el número de elementos pares e impares de un arreglo preconstruido.

  //7. Ejercicio #7. Realice el programa en C++ que imprima las tablas de multiplicar del numero solicitado hasta 10 veces.

  //8. Ejercicio #8 Realice el programa en C++ que encuentre los tres mayores elementos de un arreglo de 1000 elementos generados de forma aleatoria de tipo entero. Utilice el arreglo preconstruido.

  //9. Ejercicio #9 Realice el programa en C++ que encuentre el segundo menor elemento de un arreglo de 1000 elementos de tipo double de forma aleatoria. Utilice el arreglo preconstruido.

  //10. Ejercicio #10 Realice el programa en C++ que invierta los valores de un arreglo de 10 elementos de tipo entero de forma aleatoria. Utilice el arreglo preconstruido.

}
