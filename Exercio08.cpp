#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float raio, area;
    const float PI = 3.14159;
    
    cout << "Digite o raio do c�rculo: ";
    cin >> raio;
    
    area = PI * pow(raio, 2);
    
    cout << "A �rea do c�rculo �: " << area << endl;

    return 0;
}

