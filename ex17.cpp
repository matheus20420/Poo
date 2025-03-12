#include <iostream>
using namespace std;

int main(){
    int n1, n2, media=0, faltas;
    cout << "Digite a quantidade de faltas: ";
    cin >> faltas;
    cout << "Digite a Nota 1: ";
    cin >> n1;
    cout << "Digite a Nota 2: ";
    cin >> n2;
    media = (n1 + n2) / 2;
    if (media >= 6 && faltas <= 180){
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}