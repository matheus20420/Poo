#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "matheus, mota";
    str.replace(8, 5, "ramos");
    cout << str << endl;

    str.replace(7,1," ");
    cout << str << endl;
    return 0;
}
