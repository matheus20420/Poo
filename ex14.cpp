#include <iostream>
using namespace std;
int main(){
    int x = 10, y = 2, z = 0;
    cout << "O valor de x = " << x << endl;
    cout << "O valor de y = " << y << endl;
    cout << "Troquei valores" << endl;

    z = y;
    y = x;
    x = z;
    cout << "O valor de x = " << x << endl;
    cout << "O valor de y = " << y << endl;
    x = x * -1;
    cout << "O valor de x negativo = " << x << endl;
    return 0;
}