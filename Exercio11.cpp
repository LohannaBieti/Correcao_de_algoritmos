#include <iostream>
using namespace std;

int main() {
    float precoOriginal, percentualDesconto, precoFinal;
    
    cout << "Digite o pre�o original: ";
    cin >> precoOriginal;
    cout << "Digite o percentual de desconto: ";
    cin >> percentualDesconto;
    
    precoFinal = precoOriginal - (precoOriginal * percentualDesconto / 100);
    
    cout << "Pre�o com desconto: " << precoFinal << endl;

    return 0;
}

