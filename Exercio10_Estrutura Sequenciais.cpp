#include <iostream>
using namespace std;
int main() {
   float kwh, total;
    cout << "Consumo em kWh: ";
    cin >> kwh;
    if (kwh <= 100)
        total = kwh * 0.5;
    else if (kwh <= 200)
        total = kwh * 0.7;
    else
        total = kwh * 0.9;
    cout << "Valor a pagar: R$ " << total << endl;

    return 0;
}
