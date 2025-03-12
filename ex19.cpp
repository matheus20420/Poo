#include <iostream>
using namespace std;

int main()
{
    int dia_semana;
    cout << "Digite um número de 1 a 7: ";
    cin >> dia_semana;
    switch (dia_semana)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-feira" << endl;
        break;
    case 3:
        cout << "Terça-feira" << endl;
        break;
    case 4:
        cout << "Quarta-feira" << endl;
        break;
    case 5:
        cout << "Quinta-feira" << endl;
        break;
    case 6:
        cout << "Sexta-feira" << endl;
        break;
    case 7:
        cout << "Sábado" << endl;
        break;
    default:
        cout << "Número inválido" << endl;
        return 0;
    }
}