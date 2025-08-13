#include <iostream>
using namespace std;
int main() {
   float nota;
    cout << "Digite a nota (0 a 10): ";
    cin >> nota;
    if (nota >= 6)
        cout << "Aprovado\n";
    else
        cout << "Reprovado\n";

    return 0;
}
