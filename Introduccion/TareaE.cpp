using namespace std; 
#include <iostream>

int main()
{
// 1.21 Crear el código de un programa en C++ que pregunte si quiere salir del ciclo usando la instrucción “do … while”, y leer un “string” donde el usuario tiene solo dos opciones para contestar. Si el usuario contesta “SI” entonces salir del ciclo, su contesta “NO” entonces volver a hacer la pregunta “Quieres salir del ciclo? [SI/NO]”. Ojo la contestación deben ser estrictamente mayúsculas.

//1.22 Hacer un menú de opciones que ejecute las operaciones aritméticas básicas (+) suma, (-) resta, (*) multiplicación, (/) división y (%) residuo. que muestre un menú como el que se muestra en la figura de abajo. Deberá usar la instrucción “do … while”, y deberá leer un carácter y en base a la opción deberá ejecutar la operación, según la opción que elija.
//Los dos operandos deberán ser preguntados al usuario, convertirlos a “int” y guardados en dos variables con nombres “numero1” y “numero2”, el resultado debe ser guardado en una variable llamada “total”, el total debe ser impreso en la consola.
// Una vez que termine la operación, inicialice las variables “numero1”, “numero2” y “total” en cero y el usuario podrá hacer la siguiente operación, hasta que el usuario presione “s” de salir entonces terminará el programa.

//1.23 Crear un programa en C++ que “simule” dos operaciones básicas de un cajero que es retiro y consulta de saldo, el proceso debe considerar la lectura y validación de banda magnética o chip*. Si la tarjeta es invalida, terminar el proceso usando la instrucción “break “de lo contrario pedir un pin de 4 dígitos, validar que solo sean 4 dígitos, el digito a validar será “1234” de lo contrario será pin invalido. 

//1.24 Hacer un programa que “simule” “Temple Run” donde el corredor iniciara siempre corriendo hacia adelante es decir dirección “adelante”, la dirección tiene otros dos posibles valores “izquierda” y “derecha”.
  srand(time(NULL)); //semilla
	int castigo = 0;
	int vida=12;
	int premio = 0;
	cout << "vida inicial " 
		<< vida << endl;
	while (vida > 0) 
	{
		//deducir uno vida
		vida--;
		cout << "costo de ciclo " 
			<< vida << endl;
		// castigo?
		castigo = rand() % 2;
		if (castigo == 1) 
		{
			vida = vida - 3;
			cout << "castigo "
				<< vida << endl;
		}
		premio = rand() % 2;
		if (premio ==1)
		{
			vida = vida + 3;
			cout << "premio "
				<< vida << endl;
		}
		cout << "vida despues ciclo "
			<< vida << endl;
	}
}
