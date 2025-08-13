#include <iostream>
using namespace std;
int main() {
	int idade;
	cout << "Digite a idade: ";
    cin >> idade;
    if (idade >= 18) {
        cout << "Apto para CNH";
        if (idade >= 65)
            cout << " - Exame especial necessario";
        cout << endl;
    }
    return 0;
}
