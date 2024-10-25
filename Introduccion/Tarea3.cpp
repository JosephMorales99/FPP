#include <iostream>
using namespace std;

int main()
{
   //1.1 Escriba el código que pregunte al usuario por un número y escribir el resultado del cuadrado.
	double numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    // Al cuadrado
    double cuadrado = numero * numero;
    // Resultado
    cout << "El cuadrado de " << numero << " es " << cuadrado << endl;
	
   //1.2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x,4x y 5x. Donde x es el número ingresado por el usuario, y los subsecuentes implicanmultiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el resultado en el siguiente formato:
	int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    // Resultados
    cout << numero << " -- "
         << numero * 2 << " -- "
         << numero * 3 << " -- "
         << numero * 4 << " -- "
         << numero * 5 << endl; 

   //1.3 Escriba un programa que pregunte al usuario por su peso y en kilogramos y lo convierta en libras, el factor de conversión es 2.2 libras por un kilo.
 double pesoKilogramos;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> pesoKilogramos;
    // Convertir el peso a libras
    double pesoLibras = pesoKilogramos * 2.2;
    // Resultado resultado
    cout << "Su peso en libras es: " << pesoLibras << endl;
   //1.4 Escriba el código de un programa que pregunte por 3 números (use 3 instrucciones de entrada). Cree las tres variables de entrada, adicionalmente cree una variable que se llame Total y Promedio, donde Total contendrá la suma de las tres variables y Promedio que será el cálculo del promedio de los 3 números.
  double num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;
    double Total = numero1 + numero2 + numero3;
    double Promedio = Total / 3;
    // Resultados
    cout << "Total: " << Total << endl;
    cout << "Promedio: " << Promedio << endl;
     //1.5 Escriba un cálculo que calcule la propina de un Total, donde le pregunte al usuario por el total de la cuenta, y el porcentaje de propina a aplicar y guardarlo en una variable que se llame Porcentaje y como resultado imprima la cantidad a dar de propina.
double totalCuenta, porcentaje;
    //Cuenta
    cout << "Ingrese el total de la cuenta: ";
    cin >> totalCuenta;
    // Propina
    cout << "Ingrese el porcentaje de propina a aplicar: ";
    cin >> porcentaje;
    // Cantidad de propina
    double propina = (totalCuenta * porcentaje) / 100;
    // Resultado
    cout << "La cantidad a dar de propina es: " << propina << endl;

    //1.6 Escriba el código que solicite un número al usuario y si este número es mayor a 100, que imprima “El número es mayor a 100”, de lo contrario que imprima “El número es menor o igual que 100”
	double numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero > 100) {
        cout << "El número es mayor a 100" << endl;
    } else {
        cout << "El número es menor o igual que 100" << endl;
    }
	// 1.7 Escriba el código que solicite un número al usuario si este número es menor a cero entonces imprima que “el número es negativo”, de lo contrario imprimir el “número es positivo” double numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero < 0) {
        cout << "El número es negativo" << endl;
    } else {
        cout << "El número es positivo" << endl;
    }
	//1.8 Escriba un programa que pregunte por el mail del usuario y guardarlo en una variable llamada “Miemail”, y luego que pregunte por un password y se guarde en una variable llamada “Password_Ingresado”, validar si el password es igual a “12345” entonces imprimir “Felicidades password correcto” de otra manera imprimir “Su password es incorrecto”
string Miemail;
    string Password_Ingresado;
    cout << "Ingrese su email: ";
    cin >> Miemail;
    cout << "Ingrese su contraseña: ";
    cin >> Password_Ingresado;
    if (Password_Ingresado == "12345") {
        cout << "Felicidades, password correcto" << endl;
    } else {
        cout << "Su password es incorrecto" << endl;
    }
//1.9 Crear un código que convierta de grados farenheit a grados centígrados, usando una variable llamada Farenheith; basado en la siguiente formula:
	 double Fahrenheit;
    cout << "Ingrese la temperatura en grados Fahrenheit: ";
    cin >> Fahrenheit;
    double Celsius = (Fahrenheit - 32) * 5.0 / 9.0;
    cout << "La temperatura en grados Celsius es: " << Celsius << endl;

//1.10 Crear el código que reciba el peso y la estatura del usuario, y calcule la masa corporal 
	double peso, estatura; // Variables de entrada
	double mc;             // Variables de salida
	cout << "peso? ";
	cin >> peso; 
	cout << endl; // salto de linea 
	cout << "estatura? ";
	cin >> estatura;
	cout << endl; 
	mc = peso / (estatura * estatura);
	cout << "mc ;" << mc << endl; 
	if (mc < 18.5) {
		cout << "Tu peso es bajo " << endl;
	}
	if (mc >= 18.5 and mc > 25)
	{
		cout << "Peso es normal " << endl; 
	}
}
