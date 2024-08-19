//Supondo que a população de um país "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 porcento, e que a população de um país "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de crescimento de  1,5 porcento.
//Fazer um programa para calcular e mostrar o número de anos necessários  para que a população do país "a" ultrapasse ou seja igual a população do país "b",  mantidas essas taxas de crescimento.
//O cálculo deve ser realizado por uma função separada que retorna apenas o número de  anos.

#include <iostream>

using namespace std;


int anosParaUltrapassar(long populacaoA, long populacaoB, double taxaA, double taxaB) {
    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += static_cast<long>(populacaoA * taxaA);
        populacaoB += static_cast<long>(populacaoB * taxaB);
        anos++;
    }

    return anos;
}

int main() {
    long populacaoA = 90000000;
    long populacaoB = 200000000;
    double taxaA = 0.03;
    double taxaB = 0.015;


    int anos = anosParaUltrapassar(populacaoA, populacaoB, taxaA, taxaB);


    cout << "Anos necessarios para a populaçao do pais A ultrapassar ou igualar a do pais B: " << anos << endl;

    return 0;
}

