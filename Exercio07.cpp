#include <iostream>
using namespace std;

int main() {
    int num1, num2, soma, subtracao, multiplicacao;
    float divisao;
    
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = static_cast<float>(num1) / num2;

    cout << "Soma: " << soma << endl;
    cout << "Subtra��o: " << subtracao << endl;
    cout << "Multiplica��o: " << multiplicacao << endl;
    cout << "Divis�o: " << divisao << endl;

    return 0;
}

