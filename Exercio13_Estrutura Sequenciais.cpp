#include <iostream>
using namespace std;
int main() {
   float n1, n2, media;
    cout << "Digite duas notas: ";
    cin >> n1 >> n2;
    media = (n1 + n2) / 2;
    if (media >= 6)
        cout << "Aprovado\n";
    else
        cout << "Prova Final\n";

    return 0;
}
