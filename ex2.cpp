#include <iostream>
using namespace std;
int main(){
    float num1, num2;

    cout << "Insira o Primeiro numero: ";
    cin >> num1;

    cout << "Insira o Segundo numero: ";
    cin >> num2;


    cout << "|---------------|" << endl;
    cout << "Soma           :" << num1 + num2 << endl;
    cout << "Subtração      :" << num1 - num2 << endl;
    cout << "Multiplicação  :" << num1 * num2 << endl;
    cout << "Divisão        :" << num1 / num2 << endl;
    cout << "Modulo         :" << (int)num1 % (int)num2 << endl;
    cout << "Porcentagem    :" << 100.0*(num1/num2) << endl;
    cout << "media          :" << (num1 + num2) / 2 << endl;
    cout << "|---------------|" << endl;
    return 0;
}