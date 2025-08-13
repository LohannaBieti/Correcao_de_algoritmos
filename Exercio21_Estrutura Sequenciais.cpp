#include <iostream>
using namespace std;
int main() {
	int num1,num2,num3;
    cout << "Digite tres numeros: ";
    cin >> num1 >> num2 >> num3;
    if (num1 == num2 && num2 == num3)
        cout << "Todos iguais\n";
    else if (num1 >= num2 && num1 >= num3)
        cout << "Maior: " << num1 << endl;
    else if (num2 >= num1 && num2 >= num3)
        cout << "Maior: " << num2 << endl;
    else
        cout << "Maior: " << num3 << endl;
    return 0;
}
