#include <iostream>
using namespace std;

int main() {
    float espaco, tempo, velocidade;
    
    cout << "Digite o espaço percorrido (em km): ";
    cin >> espaco;
    cout << "Digite o tempo gasto (em horas): ";
    cin >> tempo;
    
    velocidade = espaco / tempo;
    
    cout << "A velocidade média é: " << velocidade << " km/h" << endl;

    return 0;
}

