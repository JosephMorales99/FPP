#include <iostream>
using namespace std;

int main(
// 1.16 Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del más grande. 
  
    float A, B, C;
   
    cout << "Ingresa el primer número (A): ";
    cin >> A;
    cout << "Ingresa el segundo número (B): ";
    cin >> B;
    cout << "Ingresa el tercer número (C): ";
    cin >> C;

    // Determinar el número más grande
    float maximo = A; // Suponemos que A es el más grande

    if (B > maximo) {
        maximo = B; // Actualizamos si B es mayor
    }
    if (C > maximo) {
        maximo = C; 
    }

    // Resultado
    cout << "El número más grande es: " << maximo << endl;
}

// 1.17 Crear un programa que lea tres números diferentes, A, B, C, e imprime los valores máximo y mínimo. El procedimiento consistirá en comparaciones sucesivas de parejas de números. Cree el algoritmo, diagrama de flujo y código en C# 

    float A, B, C;
    cout << "Ingresa el primer número (A): ";
    cin >> A;
    cout << "Ingresa el segundo número (B): ";
    cin >> B;
    cout << "Ingresa el tercer número (C): ";
    cin >> C;

    float maximo = A;
    float minimo = A;

    if (B > maximo) {
        maximo = B;
    }
    if (B < minimo) {
        minimo = B;
    }
    if (C > maximo) {
        maximo = C;
    }
    if (C < minimo) {
        minimo = C;
    }
    // Resultados
    cout << "El número máximo es: " << maximo << endl;
    cout << "El número mínimo es: " << minimo << endl;
}
// 1.18 Crear un programa al que le solicitemos la hora HH, MM, SS y nos calcule la hora dentro de un segundo más tarde. Leeremos las horas minutos y segundos como números enteros. 

    int HH, MM, SS;

    cout << "Ingresa la hora (HH): ";
    cin >> HH;
    cout << "Ingresa los minutos (MM): ";
    cin >> MM;
    cout << "Ingresa los segundos (SS): ";
    cin >> SS;

    if (HH < 0 || HH > 23 || MM < 0 || MM > 59 || SS < 0 || SS > 59) {
        cout << "Hora inválida. Por favor ingresa valores correctos." << endl;
        return 1;
    }
    SS++;

    if (SS >= 60) {
        SS = 0; 
        MM++;    
    }

    if (MM >= 60) {
        MM = 0; 
        HH++;     
    }
    if (HH >= 24) {
        HH = 0;  
    }
    // Resultado
    cout << "La nueva hora es: " << HH << " horas, " << MM << " minutos, " << SS << " segundos." << endl;
}

// 1.19 Determinar el precio del boleto de ida y vuelta en avión, conociendo la distancia a recorrer y sabiendo que si el número de días de estancia es superior a 7 y la distancia superior a 800 km el billete tiene una reducción del 30%. El precio por km es de 2.5 dólares. 

    float distancia; 
    int diasEstancia; 
    const float precioPorKm = 2.5; 

    cout << "Ingresa la distancia a recorrer (en km): ";
    cin >> distancia;
    cout << "Ingresa el número de días de estancia: ";
    cin >> diasEstancia;

    float precioBase = distancia * precioPorKm * 2; // ida y vuelta

    if (diasEstancia > 7 && distancia > 800) {
        precioBase *= 0.7; // aplicar el 30% de reducción
    }

    //Resultado
    cout << "El precio del boleto de ida y vuelta es: $" << precioBase << endl;
}
// 1.20 Escribir las instrucciones apropiadas para cada una de las siguientes condiciones:
//a) Si un ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo recto" sino imprimir el mensaje "El ángulo no es un ángulo recto".
int angulo;
    cout << "Ingresa el ángulo en grados: ";
    cin >> angulo;

    if (angulo == 90) {
        cout << "El ángulo es un ángulo recto." << endl;
    } else {
        cout << "El ángulo no es un ángulo recto." << endl;
    }
//b) Si la temperatura es superior a 100 grados, visualizar el mensaje “por encima del punto de ebullición del agua” sino visualizar el mensaje “por debajo del punto de ebullición del agua
float temperatura;
    cout << "Ingresa la temperatura en grados: ";
    cin >> temperatura;

    if (temperatura > 100) {
        cout << "Por encima del punto de ebullición del agua." << endl;
    } else {
        cout << "Por debajo del punto de ebullición del agua." << endl;
    }
//c) Recibir un número, Si este número es positivo, sumar el número a total de positivos usando una variable que acumule los números negativos, sino sumar al total de negativos usando una variable que acumule los números negativos.
 int numero;
    int totalPositivos = 0;
    int totalNegativos = 0;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0) {
        totalPositivos += numero; // Sumar a total de positivos
    } else {
        totalNegativos += numero; // Sumar a total de negativos
    }

    cout << "Total de positivos: " << totalPositivos << endl;
    cout << "Total de negativos: " << totalNegativos << endl;
}
//d) Si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”.
int x, y, z;
    cout << "Ingresa x, y, z: ";
    cin >> x >> y >> z;

    if (x > y && z < y) {
        cout << "x: " << x << endl;
    }
//e) Si la distancia es mayor que 20 y menos que 35, crear y leer un valor para luna variable de tipo entero llamada “tiempo”.
      int distancia;
    cout << "Ingresa la distancia: ";
    cin >> distancia;

    if (distancia > 20 && distancia < 35) {
        int tiempo;
        cout << "Ingresa el tiempo: ";
        cin >> tiempo;
        cout << "Tiempo ingresado: " << tiempo << endl;
    }
)
