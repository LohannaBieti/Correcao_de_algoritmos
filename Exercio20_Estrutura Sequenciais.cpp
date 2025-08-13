#include <iostream>
using namespace std;
int main() {
	float peso, altura, imc;
    cout << "Peso (kg): ";
    cin >> peso;
    cout << "Altura (m): ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << "IMC: " << imc << endl;
    if (imc < 18.5)
        cout << "Abaixo do peso\n";
    else if (imc < 25)
        cout << "Peso normal\n";
    else if (imc < 30)
        cout << "Sobrepeso\n";
    else
        cout << "Obesidade\n";
    return 0;
}
