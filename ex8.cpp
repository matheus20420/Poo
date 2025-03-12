#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "matheus, mota";
    str.insert(8, "ramos");
    cout << str << endl;
    return 0;
}