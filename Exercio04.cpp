#include <iostream>
using namespace std;

int main() {
    double salarioBase, percentual, salarioFinal;
    
    cout << "Digite o sal�rio base: ";
    cin >> salarioBase;
    cout << "Digite o percentual de aumento (%): ";
    cin >> percentual;
    
    salarioFinal = salarioBase + (salarioBase * percentual / 100);
    
    cout << "Sal�rio com aumento: " << salarioFinal << endl;
    
    return 0;
}

