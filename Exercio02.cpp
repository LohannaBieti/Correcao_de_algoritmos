#include <iostream>
using namespace std;

int main() {
    double base, altura, area;
    
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite a altura: ";
    cin >> altura;
    
    area = (base * altura) / 2;
    
    cout << "�rea do tri�ngulo: " << area << endl;
    
    return 0;
}

