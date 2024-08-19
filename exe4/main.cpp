//Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para graus Celsius.
//O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte fórmula: C=5/9.(F-32)
#include <iostream>
using namespace std;

double fahrenheitParaCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    cout << "Conversão de Fahrenheit para Celsius:" << endl;


    for (double fahrenheit = 0; fahrenheit <= 100; fahrenheit++) {
        double celsius = fahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << " °F = " << celsius << " °C" << endl;
    }

    return 0;
}
