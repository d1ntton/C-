//Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
//Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1 x alt - 44.7.
#include <iostream>
#include <string>
using namespace std;


double pesoIdeal(double alt, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * alt - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return 62.1 * alt - 44.7;
    } else {
        return -1;
    }
}

int main() {
    double altura;
    char sexo;


    cout << "Informe a altura (em metros): ";
    cin >> altura;
    cout << "Informe o sexo (M para masculino, F para feminino): ";
    cin >> sexo;


    double peso = pesoIdeal(altura, sexo);


    if (peso != -1) {
        cout << "O peso ideal é: " << peso << " kg" << endl;
    } else {
        cout << "Sexo inválido. Por favor, informe 'M' ou 'F'." << endl;
    }

    return 0;
}

