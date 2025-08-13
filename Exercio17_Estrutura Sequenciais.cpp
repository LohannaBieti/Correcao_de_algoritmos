#include <iostream>
using namespace std;
int main() {
	int num;
	 cout << "Digite um numero: ";
    cin >> num;
    if (num == 0)
        cout << "Neutro\n";
    else if (num % 2 == 0)
        cout << "Par\n";
    else
        cout << "Impar\n";

    return 0;
}
