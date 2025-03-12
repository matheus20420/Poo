#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    int valorproduzido;

    cout << "Digite a Nota 1: ";
    cin >> n1;
    cout << "Digite a Nota 2: ";
    cin >> n2;
    n1++;
    n2--;
    cout << "O valor da Nota 1 foi alterado para: " << n1 << endl;
    cout << "O valor da Nota 2 foi alterado para: " << n2 << endl;
    n3 = 10;
    cout << "O valor da Nota 3: " << n3 << endl;
    valorproduzido = 2 * (n3++);
    cout << "O valor produzido n3++ " << n3 << endl;
    cout << "O valor produzido n++ " << valorproduzido << endl;
    valorproduzido = 2 * (++n3);
    cout << "O valor de ++n3 " << n3 << endl;
    cout << "O valor produzido ++n " << valorproduzido << endl;

    return 0;
}