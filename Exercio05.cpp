#include <iostream>
using namespace std;

int main() {
    double precoUnitario, quantidade, valorTotal;
    
    cout << "Digite o pre�o unit�rio: ";
    cin >> precoUnitario;
    cout << "Digite a quantidade: ";
    cin >> quantidade;
    
    valorTotal = precoUnitario * quantidade;
    
    cout << "Valor total da compra: " << valorTotal << endl;
    
    return 0;
}

