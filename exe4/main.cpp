//Construir um programa que calcule e apresente o resultado da convers�o de 0 a 100  graus Fahrenheit para graus Celsius.
//O c�lculo dessa convers�o deve ficar isolado em  uma fun��o estar de acordo com a seguinte f�rmula: C=5/9.(F-32)
#include <iostream>
using namespace std;

double fahrenheitParaCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    cout << "Convers�o de Fahrenheit para Celsius:" << endl;


    for (double fahrenheit = 0; fahrenheit <= 100; fahrenheit++) {
        double celsius = fahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << " �F = " << celsius << " �C" << endl;
    }

    return 0;
}
