#include <iostream>
using namespace std;

int main() {
    float espaco, tempo, velocidade;
    
    cout << "Digite o espa�o percorrido (em km): ";
    cin >> espaco;
    cout << "Digite o tempo gasto (em horas): ";
    cin >> tempo;
    
    velocidade = espaco / tempo;
    
    cout << "A velocidade m�dia �: " << velocidade << " km/h" << endl;

    return 0;
}

