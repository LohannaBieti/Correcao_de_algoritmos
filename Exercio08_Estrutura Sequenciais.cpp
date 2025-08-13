#include <iostream>
using namespace std;
int main() {
   float horas, valor_hora, pagamento;
    cout << "Horas trabalhadas: ";
    cin >> horas;
    cout << "Valor por hora: R$ ";
    cin >> valor_hora;
    if (horas > 40)
        pagamento = 40 * valor_hora + (horas - 40) * valor_hora * 1.5;
    else
        pagamento = horas * valor_hora;
    cout << "Pagamento final: R$ " << pagamento << endl;

    return 0;
}
