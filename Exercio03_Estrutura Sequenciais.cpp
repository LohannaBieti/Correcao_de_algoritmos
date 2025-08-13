#include <iostream>
using namespace std;

int main() {
   float preco;
    cout << "Preco do produto: R$ ";
    cin >> preco;
    if (preco > 100)
    preco *= 0.95;
    cout << "Valor final: R$ " << preco << endl;

    return 0;
}
