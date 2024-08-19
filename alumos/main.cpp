//Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome, que faça a leitura dos dados e os apresente em seguida na tela.
//O aluno deve ser  determinado através de um struct e seu nome deve ter no máximo 100 caracteres.


#include <iostream>
#include <string>

using namespace std;

const int ALUNOS = 50;

struct Aluno {
    int matricula;
    char nome[101];
};

int main() {
    Aluno alunos[ALUNOS];
    int numAlunos;

    cout << "Digite o numero de alunos (maximo " << ALUNOS << "): ";
    cin >> numAlunos;


    if (numAlunos < 1 || numAlunos > ALUNOS) {
        cout << "Numero de alunos invalido!" << endl;
        return 1;
    }


    for (int i = 0; i < numAlunos; i++) {
        cout << "Digite a matricula do aluno " << (i + 1) << ": ";
        cin >> alunos[i].matricula;
        cout << "Digite o nome do aluno " << (i + 1) << ": ";
        cin.ignore();
        cin.getline(alunos[i].nome, 101);
    }


    cout << "\nDados dos Alunos:\n";
    for (int i = 0; i < numAlunos; i++) {
        cout << "Aluno " << (i + 1) << ": Matricula: " << alunos[i].matricula
             << ", Nome: " << alunos[i].nome << endl;
    }

    return 0;
}

