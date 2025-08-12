#include <iostream>
using namespace std;

int main() {
    float tempo, velocidade, distancia;
    
    cout << "Digite o tempo da viagem (em horas): ";
    cin >> tempo;
    cout << "Digite a velocidade média (em km/h): ";
    cin >> velocidade;
    
    distancia = tempo * velocidade;
    
    cout << "A distância percorrida é: " << distancia << " km" << endl;

    return 0;
}

