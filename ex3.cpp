#include <iostream>
using namespace std;
#define preco 1.99

int main()
{
    int pera;
    char qualidade;
    float peso, total;
    pera = 3;
    qualidade = 'A';
    peso = 0.5;

    total = pera * preco * peso;
    cout << "Preco: " << preco << endl;
    cout << "Total: " << total << endl;
    return 0;
}