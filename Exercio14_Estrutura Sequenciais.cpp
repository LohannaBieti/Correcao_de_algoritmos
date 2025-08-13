#include <iostream>
using namespace std;
int main() {
	int preco;
   cout << "Valor da compra: R$ ";
    cin >> preco;
    if (preco >= 200)
        cout << "Frete gratis\n";
    else
        preco += 20;
    cout << "Total: R$ " << preco << endl;

    return 0;
}
