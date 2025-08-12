#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float raio, area;
    const float PI = 3.14159;
    
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    area = PI * pow(raio, 2);
    
    cout << "A área do círculo é: " << area << endl;

    return 0;
}

