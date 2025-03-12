#include <iostream>
using namespace std;

int main(){
    int k = 10, j= 10;
    cout << "Antes di pré fixado: " << k << endl;
    cout << "Durante o pré fixado: " << ++k << endl;
    cout << "Depois do pré fixado: " << k << endl;

    cout << "Antes do pós fixado: " << j << endl;
    cout << "Durante o pós fixado: " << j++ << " primeiro impreime o valor depois a soma" << endl;
    cout << "Depois do pós fixado: " << j << endl;



    return 0;
}