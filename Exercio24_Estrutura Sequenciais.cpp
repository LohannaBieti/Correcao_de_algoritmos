#include <iostream>
using namespace std;
int main() {
	float vel;
    cout << "Velocidade do veiculo: ";
    cin >> vel;
    if (vel > 110)
        cout << "Acima do limite\n";
    else if (vel >= 80)
        cout << "Dentro do limite\n";
    else
        cout << "Abaixo do recomendado\n";
    return 0;
}
