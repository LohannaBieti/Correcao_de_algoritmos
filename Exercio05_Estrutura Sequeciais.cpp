#include <iostream>
using namespace std;
int main() {
   float freq;
   float nota;
    cout << "Nota (0 a 10): ";
    cin >> nota;
    cout << "Frequencia (%): ";
    cin >> freq;
    if (nota >= 6 && freq >= 75)
        cout << "Resultado: Aprovado\n";
    else if (nota >= 4 && freq >= 75)
        cout << "Resultado: Recuperacao\n";
    else
        cout << "Resultado: Reprovado\n";

    return 0;
}
