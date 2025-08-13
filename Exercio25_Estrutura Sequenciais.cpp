#include <iostream>
using namespace std;
int main() {
	float num1, num2;
	char op;
    cout << "Digite dois numeros e um operador (+, -, *, /): ";
    cin >> num1 >> num2 >> op;
    switch (op) {
        case '+': cout << "Resultado: " << num1 + num2 << endl; break;
        case '-': cout << "Resultado: " << num1 - num2 << endl; break;
        case '*': cout << "Resultado: " << num1 * num2 << endl; break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << (float)num1 / num2 << endl;
            else
                cout << "Erro: divisao por zero\n";
            break;
        default:
            cout << "Operador invalido\n";
    }
    return 0;
}
