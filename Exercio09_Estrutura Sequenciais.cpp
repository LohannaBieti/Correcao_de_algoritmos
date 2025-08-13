#include <iostream>
using namespace std;
int main() {
	int idade; 
   cout << "Digite a idade: ";
    cin >> idade;
    if (idade <= 25)
        cout << "Jovem\n";
    else
        cout << "Adulto\n";

    return 0;
}
