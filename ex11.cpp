#include <iostream>
#include <string>
using namespace std;
int main(){
    string nome = "matheus";
    string sobrenome = "Ramos Mota";
    cout << nome + sobrenome << endl;
    cout << "outra forma de concatenar"<< endl;
    cout << nome.append(sobrenome) << endl;
    string nomecompleto = nome + " " + sobrenome;
    cout << nomecompleto << endl;
    cout << "quantas letras tem o meu nome completo?" << endl;
    cout << nomecompleto.length() << endl;
    cout << "outra forma de ver o tamanho do nome completo" << endl;    
    cout << nomecompleto.size() << endl;
    cout << "primeira letra do nome: " << nomecompleto[0] << endl;
    cout << "outra forma de fazer isso :" << nomecompleto.at(0) << endl;
    nomecompleto[0] = 'S';
    cout << "alterei a primeira letra do nome: " << nomecompleto << endl;
    cout << "ultima letra do nome: " << nomecompleto[nomecompleto.length()] << endl;
    return 0;
}