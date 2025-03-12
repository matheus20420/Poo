#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome = "matheus";
    string letra = "s";
    string sobrenome = "ramos mota";

    cout << "meu nome é: " << nome << endl;
    cout << "meu nome completo: " << nome.append(sobrenome) << endl;
    cout << "Tamanho" << (nome.length()) << endl;
    cout << "\nPrimeira letra: " << nome[0] << endl;

    nome[0] = 'M';
    cout << "Meu nome agora é: " << nome << endl;
    return 0;
}