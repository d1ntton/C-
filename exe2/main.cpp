#include <iostream>
using namespace std;
//Construir um programa que na fun��o main leia 3 valores informados pelo usu�rio e  utilize uma fun��o para retornar o maior deles.
// Em seguida, a fun��o main deve  imprimir o resultado.

int maior(int a, int b, int c) {
    int maiorValor = a;
    if (b > maiorValor) {
        maiorValor = b;
    }
    if (c > maiorValor) {
        maiorValor = c;
    }
    return maiorValor;
}

int main() {
    int valor1, valor2, valor3;


    cout << "Informe o primeiro valor: ";
    cin >> valor1;
    cout << "Informe o segundo valor: ";
    cin >> valor2;
    cout << "Informe o terceiro valor: ";
    cin >> valor3;


    int resultado = maior(valor1, valor2, valor3);


    cout << "O maior valor e: " << resultado << endl;

    return 0;
}

