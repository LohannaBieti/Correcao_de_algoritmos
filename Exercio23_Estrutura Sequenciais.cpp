#include <iostream>
using namespace std;
int main() {
	string user, senha;
    cout << "Usuario: ";
    cin >> user;
    cout << "Senha: ";
    cin >> senha;
    if (user == "admin" && senha == "123")
        cout << "Acesso permitido\n";
    else
        cout << "Acesso negado\n";
    return 0;
}
