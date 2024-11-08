using namespace std; 
#include <iostream>

int main()
{
// 1.21 Crear el código de un programa en C++ que pregunte si quiere salir del ciclo usando la instrucción “do … while”, y leer un “string” donde el usuario tiene solo dos opciones para contestar. Si el usuario contesta “SI” entonces salir del ciclo, su contesta “NO” entonces volver a hacer la pregunta “Quieres salir del ciclo? [SI/NO]”. Ojo la contestación deben ser estrictamente mayúsculas.
string respuesta; // Variable para almacenar la respuesta del usuario

    // Bucle do...while para seguir preguntando hasta que el usuario responda "SI"
    do {
        cout << "Quieres salir del ciclo? [SI/NO]: ";
        cin >> respuesta;  // Lee la respuesta del usuario

        // Verificamos si la respuesta es diferente de "SI" para seguir preguntando
    } while (respuesta != "SI");

    cout << "Has salido del ciclo." << endl;
//1.22 Hacer un menú de opciones que ejecute las operaciones aritméticas básicas (+) suma, (-) resta, (*) multiplicación, (/) división y (%) residuo. que muestre un menú como el que se muestra en la figura de abajo. Deberá usar la instrucción “do … while”, y deberá leer un carácter y en base a la opción deberá ejecutar la operación, según la opción que elija.
//Los dos operandos deberán ser preguntados al usuario, convertirlos a “int” y guardados en dos variables con nombres “numero1” y “numero2”, el resultado debe ser guardado en una variable llamada “total”, el total debe ser impreso en la consola.
// Una vez que termine la operación, inicialice las variables “numero1”, “numero2” y “total” en cero y el usuario podrá hacer la siguiente operación, hasta que el usuario presione “s” de salir entonces terminará el programa.
char opcion;  // Variable para almacenar la opción seleccionada por el usuario
    int numero1, numero2, total;  // Variables para los dos operandos y el resultado

    do {
        // Mostrar el menú de opciones
        cout << "Menu de Operaciones Aritmeticas:" << endl;
        cout << "1. Suma (+)" << endl;
        cout << "2. Resta (-)" << endl;
        cout << "3. Multiplicacion (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Residuo (%)" << endl;
        cout << "s. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;  // Leer la opción elegida

        if (opcion == 's') {
            break;  // Si el usuario elige 's', salimos del ciclo
        }

        // Preguntar por los dos números
        cout << "Introduce el primer número: ";
        cin >> numero1;
        cout << "Introduce el segundo número: ";
        cin >> numero2;

        // Ejecutar la operación basada en la opción
        switch (opcion) {
            case '1':  // Suma
                total = numero1 + numero2;
                cout << "Resultado: " << total << endl;
                break;

            case '2':  // Resta
                total = numero1 - numero2;
                cout << "Resultado: " << total << endl;
                break;

            case '3':  // Multiplicación
                total = numero1 * numero2;
                cout << "Resultado: " << total << endl;
                break;

            case '4':  // División
                if (numero2 != 0) {
                    total = numero1 / numero2;
                    cout << "Resultado: " << total << endl;
                } else {
                    cout << "Error: No se puede dividir por cero." << endl;
                }
                break;

            case '5':  // Residuo
                if (numero2 != 0) {
                    total = numero1 % numero2;
                    cout << "Resultado: " << total << endl;
                } else {
                    cout << "Error: No se puede calcular el residuo con cero." << endl;
                }
                break;

            default:  // Opción no válida
                cout << "Opción no válida, por favor elige una opción correcta." << endl;
        }

        // Inicializar las variables
        numero1 = 0;
        numero2 = 0;
        total = 0;

    } while (true);  // El ciclo continuará hasta que el usuario elija salir

    cout << "Has salido del programa." << endl;
//1.23 Crear un programa en C++ que “simule” dos operaciones básicas de un cajero que es retiro y consulta de saldo, el proceso debe considerar la lectura y validación de banda magnética o chip*. Si la tarjeta es invalida, terminar el proceso usando la instrucción “break “de lo contrario pedir un pin de 4 dígitos, validar que solo sean 4 dígitos, el digito a validar será “1234” de lo contrario será pin invalido. 
string tarjeta;   // Variable para la tarjeta (simulación de banda magnética o chip)
    string pin;       // Variable para el PIN
    double saldo = 3450.00;  // Saldo inicial de la cuenta del cliente
    double retiro;    // Variable para la cantidad de dinero a retirar
    bool tarjetaValida = false;
    bool pinValido = false;
    
    // Validación de tarjeta (simulada)
    cout << "Por favor, inserte su tarjeta (simulada con un número): ";
    cin >> tarjeta;

    // Validar tarjeta (en este caso simulamos que la tarjeta "123456" es válida)
    if (tarjeta != "123456") {
        cout << "Tarjeta invalida. Proceso terminado." << endl;
        return 0;  // Termina el programa si la tarjeta no es válida
    } else {
        tarjetaValida = true;
    }

    // Solicitar y validar PIN
    cout << "Ingrese su PIN (4 dígitos): ";
    cin >> pin;

    if (pin.length() != 4 || pin != "1234") {
        cout << "PIN invalido. Proceso terminado." << endl;
        return 0;  // Termina el programa si el PIN es inválido
    } else {
        pinValido = true;
    }

    // Menú de opciones si la tarjeta y el PIN son válidos
    if (tarjetaValida && pinValido) {
        char opcion;
        
        do {
            // Mostrar el menú de opciones
            cout << "\nMenú del Cajero:" << endl;
            cout << "1. Retiro de efectivo" << endl;
            cout << "2. Consulta de saldo" << endl;
            cout << "3. Cancelar operación" << endl;
            cout << "Seleccione una opción (1, 2 o 3): ";
            cin >> opcion;

            switch(opcion) {
                case '1':  // Opción de retiro
                    cout << "Ingrese la cantidad a retirar: ";
                    cin >> retiro;

                    if (retiro > saldo) {
                        cout << "Fondos insuficientes. No se puede realizar el retiro." << endl;
                        break;  // Terminar el proceso de retiro
                    } else if (retiro <= 0) {
                        cout << "La cantidad a retirar debe ser mayor a cero." << endl;
                        break;
                    } else {
                        saldo -= retiro;  // Resta la cantidad retirada del saldo
                        cout << "Retiro realizado con éxito. Saldo remanente: $" << saldo << endl;
                        break;
                    }

                case '2':  // Opción de consulta de saldo
                    cout << "El saldo de su cuenta es: $" << saldo << endl;
                    break;

                case '3':  // Opción para cancelar la operación
                    cout << "Operación cancelada. Gracias por utilizar nuestro cajero." << endl;
                    break;

                default:
                    cout << "Opción no válida. Por favor, elija una opción correcta." << endl;
            }

        } while (opcion != '3');  // El ciclo continúa hasta que el usuario elige salir

    }

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
