#include <iostream>
using namespace std;

int main() {
    float deposito, rendimentoMensal, valorTotal;
    
    cout << "Digite o valor do depósito: ";
    cin >> deposito;
    cout << "Digite o rendimento mensal (%): ";
    cin >> rendimentoMensal;
    
    valorTotal = deposito + (deposito * rendimentoMensal / 100);
    
    cout << "Valor total após 1 mês: " << valorTotal << endl;

    return 0;
}

