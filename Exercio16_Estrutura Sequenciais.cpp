#include <iostream>
using namespace std;
int main() {
	int nota;
   cout << "Digite uma nota (0 a 10): ";
    cin >> nota;
    if (nota < 0 || nota > 10)
        cout << "Nota invalida\n";

    return 0;
}
