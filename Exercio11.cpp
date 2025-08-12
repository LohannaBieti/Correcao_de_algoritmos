#include <iostream>
using namespace std;

int main() {
    float precoOriginal, percentualDesconto, precoFinal;
    
    cout << "Digite o preço original: ";
    cin >> precoOriginal;
    cout << "Digite o percentual de desconto: ";
    cin >> percentualDesconto;
    
    precoFinal = precoOriginal - (precoOriginal * percentualDesconto / 100);
    
    cout << "Preço com desconto: " << precoFinal << endl;

    return 0;
}

