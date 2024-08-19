//Supondo que a popula��o de um pa�s "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 porcento, e que a popula��o de um pa�s "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de crescimento de  1,5 porcento.
//Fazer um programa para calcular e mostrar o n�mero de anos necess�rios  para que a popula��o do pa�s "a" ultrapasse ou seja igual a popula��o do pa�s "b",  mantidas essas taxas de crescimento.
//O c�lculo deve ser realizado por uma fun��o separada que retorna apenas o n�mero de  anos.

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


    cout << "Anos necessarios para a popula�ao do pais A ultrapassar ou igualar a do pais B: " << anos << endl;

    return 0;
}

