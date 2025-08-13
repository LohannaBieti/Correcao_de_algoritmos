#include <iostream>
using namespace std;
int main() {
	int preco;
	 cout << "Preco do produto: R$ ";
    cin >> preco;
    if (preco >= 500)
        preco *= 0.9;
    else if (preco >= 200)
        preco *= 0.93;
    else if (preco >= 100)
        preco *= 0.95;
    cout << "Valor com desconto: R$ " << preco << endl;
    return 0;
}
