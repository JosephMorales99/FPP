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

)
