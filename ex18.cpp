#include <iostream>
using namespace std;

int main()
{
    int n1, n2, media = 0, faltas, idade;
    bool aprova, amancipado;
    cout << "Digite a quantidade de faltas: ";
    cin >> faltas;
    cout << "Digite a Nota 1: ";
    cin >> n1;
    cout << "Digite a Nota 2: ";
    cin >> n2;
    media = (n1 + n2) / 2;
    if (media >= 6 && faltas <= 180)
    {
        cout << "Aprovado" << endl;
    }
    else
    {
        cout << "Aprovado por concelho de classe (1 para aprovado 0 para reprovado)" << endl;
        cin >> aprova;
        if (aprova == 1)
        {
            cout << "Aprovado" << endl;
        }
        else
        {
            cout << "Reprovado" << endl;
        }
    }
    cout << "Idade do aluno: ";
    cin >> idade;
    cout << "Aluno é emancipado (1 para sim 0 para não): ";
    cin >> amancipado;
    if (idade >= 18 || amancipado == 1)
    {
        cout << "Você pode retirar o boletin" << endl;
    }
    else
    {
        cout << "Os responsaveis devem vir retirar o boletim" << endl;
        if(idade >= 18){
            cout << "A partir deste mes o boleto segue em seu nome... " << endl;
        }
    }
    

    return 0;
}