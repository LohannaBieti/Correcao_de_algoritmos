#include <iostream>
using namespace std;

int main() {
    float deposito, rendimentoMensal, valorTotal;
    
    cout << "Digite o valor do dep�sito: ";
    cin >> deposito;
    cout << "Digite o rendimento mensal (%): ";
    cin >> rendimentoMensal;
    
    valorTotal = deposito + (deposito * rendimentoMensal / 100);
    
    cout << "Valor total ap�s 1 m�s: " << valorTotal << endl;

    return 0;
}

