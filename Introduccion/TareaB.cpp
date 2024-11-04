#include <iostream>
using namespace std;

int main()
{
// 1.1 Realiza un código que ejecute las siguientes operaciones e imprima los resultados de ejecutar cada operación usando la instrucción cin
	// 1) 3 + 5 * 2 / 2 – 1
    double num;
    cout << "Ingrese un número: ";
    cin >> numero;
    double potencia = pow(numero, 0); // Potencia de 0
    cout << "La potencia de " << numero << " es " << potencia << endl;
    return 0;

	// 2) 3 + 10 / 2 – 1
 double resultado;
    cout << "Presiona Enter para calcular el resultado de 3 + 10 / 2 - 1..." << endl;
    cin.ignore();
    resultado = 3 + 10 / 2 - 1;
    cout << "Resultado de 3 + 10 / 2 - 1: " << resultado << endl;
    return 0;

	// 3) 3 + 5 – 1
 int resultado;
    cout << "calcular el resultado de 3 + 5 - 1 : " << endl;
    cin.ignore();
    resultado = 3 + 5 - 1;
    cout << "Resultado de 3 + 5 - 1: " << resultado << endl;
    return 0;

	// 4) 8 -1 
 int resultado;
    cout << "calcular el resultado de 8 - 1 : " << endl;
    cin.ignore();
    resultado = 8 - 1;
    cout << "Resultado de 8 - 1: " << resultado << endl;
    return 0;

	// 5) 1/3*3
double resultado;
    cout << "calcular el resultado de 1 / 3 * 3 : " << endl;
    cin.ignore();
    resultado = 1.0 / 3 * 3; 
    cout << "Resultado de 1 / 3 * 3: " << resultado << endl;
    return 0;

	//1.2 Escriba el código que pregunte al usuario por un número y escribir el resultado de la potencia del número.De la siguiente manera :
	// ngrese un número: 4
	// La potencia de 4 es 1 
	// Variable para almacenar el número ingresado por el usuario
    double numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    double potencia = pow(numero, 0); 
    cout << "La potencia de " << numero << " es " << potencia << endl;
    return 0;

	//1.3 Escriba un programa que pregunte al usuario por el número de yardas a convertir en metros.Recuerde que la unidad de conversión de una yarda equivale a 0.9144 metros.
	//Ingrese las yardas: 10
	//Número en yardas : 9.144
    double yardas;
    cout << "Ingrese las yardas: ";
    cin >> yardas;
    double metros = yardas * 0.9144;
    cout << "Número en yardas: " << metros << endl;
    return 0;
	
	//1.4 Escriba el código de un programa que pregunte que calcule la depreciación de un auto con valor de 200, 000 pesos donde se depreciará por cinco años, considerando que solo se puede depreciar el 80 % del valor original pagado por el vehículo.Imprima en consola el valor de deducción por cada año.
    double valorOriginal = 200000.0;
    double porcentajeDepreciacion = 0.80;
    int años = 5;
    double valorDepreciable = valorOriginal * porcentajeDepreciacion;
    double deduccionAnual = valorDepreciable / años;

    for (int año = 1; año <= años; año++) {
        cout << "Deducción por el año " << año << ": " << deduccionAnual << " pesos" << endl;
    }

    return 0;
	
	//1.5 Escriba un cálculo que calcule el porcentaje de deducción de impuestos del salario mensual de 25, 000 pesos, donde este se deducirá un impuesto fijo de 900 pesos, más unaparte porcentual de 1.5 % sobre el cálculo de sueldo mensual – 900, Imprima el valor total del impuesto a deducir, y el sueldo neto que recibirá el empleado.
    double salarioMensual = 25000.0;
    double impuestoFijo = 900.0;
    double porcentajeImpuesto = 0.015; // 1.5%
    //Parte porcentual
    double sueldoDespuésImpuestoFijo = salarioMensual - impuestoFijo;
    double deduccionPorcentaje = sueldoDespuésImpuestoFijo * porcentajeImpuesto;
    //Impuesto a deducir
    double totalImpuesto = impuestoFijo + deduccionPorcentaje;
    // Calcular el sueldo neto
    double sueldoNeto = salarioMensual - totalImpuesto;
    // Imprimir los resultados
    cout << "Total del impuesto a deducir: " << totalImpuesto << " pesos" << endl;
    cout << "Sueldo neto que recibirá el empleado: " << sueldoNeto << " pesos" << endl;
    return 0;

	//1.6 Escriba el código de cada una de las siguientes operaciones en C++; por favor cree una variable con el nombre de su elección e imprima el resultado con la instrucción cout :
	// 1) 3 * 4
    int resultado = 3 * 4;
    cout << "El resultado de 3 * 4 es: " << resultado << endl;
    return 0;

	// 2) 12 / 3
    int resultadoDivision = 12 / 3;
    cout << "El resultado de 12 / 3 es: " << resultadoDivision << endl;
    return 0;

	// 3) 12 % 3
    int resultadoModulo = 12 % 3;
    cout << "El resultado de 12 % 3 es: " << resultadoModulo << endl;
    return 0;

	// 4) 12 % 7 
    int resultadoModulo = 12 % 7;
    cout << "El resultado de 12 % 7 es: " << resultadoModulo << endl;
    return 0;

	// 5) 3 + 3.0
 double resultadoSuma = 3 + 3.0;
    cout << "El resultado de 3 + 3.0 es: " << resultadoSuma << endl;
    return 0;

	// 6) 10 / 100 
 double resultadoDivision = 10 / 100.0; // Usar 100.0 para asegurar la división en punto flotante
    cout << "El resultado de 10 / 100 es: " << resultadoDivision << endl;
    return 0;

	// 7) Potencia 3 a la 2, para esta instrucción usar
 double resultadoPotencia = pow(3, 2); // Potencia de 3 a la 2
    cout << "El resultado de 3 elevado a 2 es: " << resultadoPotencia << endl;
    return 0;

	//i) pow(número a elevar, potencia a elevar)
double base = 3;
    double exponente = 2;

    // Calcular la potencia
    double resultadoPotencia = pow(base, exponente);
    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultadoPotencia << endl;
    return 0;

	// 1.7 Comparaciones. Cuál será el resultado de cada comparación y escriba el código e imprima los resultados usando la instrucción cout, NOTA: Las comparaciones encierrelas entre paréntesis.
	// Si a = 10 y b = 20
	//i. (a > b)
	//ii. (a < b)
	//iii. (a == b)
	//iv. (a != b)
	//v. (a + b) > 100
	//vi. (a - b) == 0
	//vii. (a * b) > 500
	//viii. (a * b) < 100
	//ix. (a - b) < 0
	//x.a < 20
    int a = 10;
    int b = 20;

    // Comparaciones
    bool comparacion1 = (a > b);          // i
    bool comparacion2 = (a < b);          // ii
    bool comparacion3 = (a == b);         // iii
    bool comparacion4 = (a != b);         // iv
    bool comparacion5 = (a + b) > 100;    // v
    bool comparacion6 = (a - b) == 0;     // vi
    bool comparacion7 = (a * b) > 500;    // vii
    bool comparacion8 = (a * b) < 100;    // viii
    bool comparacion9 = (a - b) < 0;      // ix
    bool comparacion10 = (a < 20);         // x

    // Resultados
    cout << "(a > b): " << comparacion1 << endl;
    cout << "(a < b): " << comparacion2 << endl;
    cout << "(a == b): " << comparacion3 << endl;
    cout << "(a != b): " << comparacion4 << endl;
    cout << "(a + b) > 100: " << comparacion5 << endl;
    cout << "(a - b) == 0: " << comparacion6 << endl;
    cout << "(a * b) > 500: " << comparacion7 << endl;
    cout << "(a * b) < 100: " << comparacion8 << endl;
    cout << "(a - b) < 0: " << comparacion9 << endl;
    cout << "(a < 20): " << comparacion10 << endl;

    return 0;
}
