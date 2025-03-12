#include <iostream>
using namespace std;

int main() {
    int k = 10, j= 10;
    k = k + 1;
    cout << "O valor de K alterado para : " << k << endl;
    j = j - 1;
    cout << "O valor de J alterado para : " << j << endl;
    k++;
    cout << "O valor de K alterado para : " << k << endl;
    j--;
    cout << "O valor de J alterado para : " << j << endl;

    ++k;
    cout << "O valor de K alterado para : " << k << endl;
    --j;
    cout << "O valor de J alterado para : " << j << endl;

    return 0;
}