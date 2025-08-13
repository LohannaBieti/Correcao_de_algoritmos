#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Lados do triangulo: ";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            cout << "Triangulo Equilatero\n";
        else if (a == b || a == c || b == c)
            cout << "Triangulo Isosceles\n";
        else
            cout << "Triangulo Escaleno\n";
    } else
        cout << "Nao formam um triangulo\n";

    return 0;
}
