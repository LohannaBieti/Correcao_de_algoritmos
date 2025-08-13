#include <iostream>
using namespace std;
int main() {
   float temp;
    cout << "Temperatura (°C): ";
    cin >> temp;
    if (temp < 0)
        cout << "\nCongelante";
    else
        cout << "\nClima bom";

    return 0;
}
