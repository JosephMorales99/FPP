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
    // Arreglo preconstruido
    int numeros[] = {34, 23, 94, 53, 16, 27, 5, 25, 42, 82};
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
#include <iostream>
using namespace std;

int main() {
    // Arreglo preconstruido
    int numeros[] = {34, 23, 94, 53, 16, 27, 5, 25, 42, 82};
    int tamano = sizeof(numeros) / sizeof(numeros[0]); // Tamaño del arreglo

    int pares = 0, impares = 0; // Contadores para pares e impares

    // Recorrer el arreglo
    for (int i = 0; i < tamano; i++) {
        if (numeros[i] % 2 == 0) {
            pares++; // Incrementar el contador de pares
        } else {
            impares++; // Incrementar el contador de impares
        }
    }

    // Imprimir los resultados
    cout << "Cantidad de elementos pares: " << pares << endl;
    cout << "Cantidad de elementos impares: " << impares << endl;

}

  //7. Ejercicio #7. Realice el programa en C++ que imprima las tablas de multiplicar del numero solicitado hasta 10 veces.
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un número
    cout << "Ingrese un número para generar su tabla de multiplicar: ";
    cin >> numero;

    // Imprimir la tabla de multiplicar
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

}

  //8. Ejercicio #8 Realice el programa en C++ que encuentre los tres mayores elementos de un arreglo de 1000 elementos generados de forma aleatoria de tipo entero. Utilice el arreglo preconstruido.
#include <iostream>
#include <algorithm> // Para std::sort
#include <ctime>     // Para srand y rand
using namespace std;

int main() {
    // Generar el arreglo con 1000 elementos aleatorios (si es necesario) o usar uno preconstruido
    const int TAMANO = 1000;
    int numeros[TAMANO];

    // Llenar el arreglo con valores aleatorios entre 1 y 1000
    srand(time(0));
    for (int i = 0; i < TAMANO; i++) {
        numeros[i] = rand() % 1000 + 1; // Números entre 1 y 1000
    }
    int mayor1 = INT_MIN, mayor2 = INT_MIN, mayor3 = INT_MIN;

    for (int i = 0; i < TAMANO; i++) {
        if (numeros[i] > mayor1) {
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = numeros[i];
        } else if (numeros[i] > mayor2) {
            mayor3 = mayor2;
            mayor2 = numeros[i];
        } else if (numeros[i] > mayor3) {
            mayor3 = numeros[i];
        }
    }

    // Imprimir los resultados
    cout << "Los tres mayores elementos son: " << endl;
    cout << "1. " << mayor1 << endl;
    cout << "2. " << mayor2 << endl;
    cout << "3. " << mayor3 << endl;

}

  //9. Ejercicio #9 Realice el programa en C++ que encuentre el segundo menor elemento de un arreglo de 1000 elementos de tipo double de forma aleatoria. Utilice el arreglo preconstruido.
#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <cfloat>  // Para DBL_MAX
using namespace std;

int main() {
    // Definir el tamaño del arreglo
    const int TAMANO = 1000;
    double numeros[TAMANO];

    // Generar 1000 elementos aleatorios de tipo double
    srand(time(0)); // Inicializar la semilla para números aleatorios
    for (int i = 0; i < TAMANO; i++) {
        numeros[i] = static_cast<double>(rand()) / RAND_MAX * 1000; // Números aleatorios entre 0 y 1000
    }
    // Encontrar el menor y el segundo menor
    double menor1 = DBL_MAX, menor2 = DBL_MAX;

    for (int i = 0; i < TAMANO; i++) {
        if (numeros[i] < menor1) {
            menor2 = menor1;
            menor1 = numeros[i];
        } else if (numeros[i] < menor2 && numeros[i] != menor1) {
            menor2 = numeros[i];
        }
    }

    // Imprimir los resultados
    if (menor2 == DBL_MAX) {
        cout << "No hay un segundo menor elemento en el arreglo." << endl;
    } else {
        cout << "El menor elemento es: " << menor1 << endl;
        cout << "El segundo menor elemento es: " << menor2 << endl;
    }

}

  //10. Ejercicio #10 Realice el programa en C++ que invierta los valores de un arreglo de 10 elementos de tipo entero de forma aleatoria. Utilice el arreglo preconstruido.
#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int numeros[] = {34, 23, 94, 53, 16, 27, 5, 25, 42, 82};
    const int TAMANO = sizeof(numeros) / sizeof(numeros[0]);
    cout << "Arreglo original: ";
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Invertir el arreglo
    for (int i = 0; i < TAMANO / 2; i++) {
        swap(numeros[i], numeros[TAMANO - i - 1]);
    }

    // Imprimir el arreglo invertido
    cout << "Arreglo invertido: ";
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

}

}
