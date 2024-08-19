//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa  idade expressa em dias.
#include <iostream>
using namespace std;


int idadeEmDias(int anos, int meses, int dias) {
    int totalDias = 0;


    totalDias += anos * 365;
    totalDias += meses * 30;
    totalDias += dias;

    return totalDias;
}

int main() {
    int anos, meses, dias;


    cout << "Informe a idade em anos: ";
    cin >> anos;
    cout << "Informe a idade em meses: ";
    cin >> meses;
    cout << "Informe a idade em dias: ";
    cin >> dias;


    int totalDias = idadeEmDias(anos, meses, dias);


    cout << "A idade expressa em dias e: " << totalDias << " dias." << endl;

    return 0;
}
