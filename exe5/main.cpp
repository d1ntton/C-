//Faça um procedimento que recebe a idade de um nadador por parâmetro e informa a  categoria desse nadador de acordo com a tabela abaixo:
#include <iostream>
using namespace std;

void categoriaNadador(int idade) {
    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B" << endl;
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A" << endl;
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B" << endl;
    } else if (idade >= 18) {
        cout << "Categoria: Adulto" << endl;
    } else {
        cout << "Idade inválida para categorizar." << endl;
    }
}

int main() {
    int idade;


    cout << "Informe a idade do nadador: ";
    cin >> idade;


    categoriaNadador(idade);

    return 0;
}
