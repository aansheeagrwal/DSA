#include <iostream>
using namespace std;

int main (){
    char ch;
    cout << " enter char : ";
    cin >> ch;
    if(ch >= 'a' && ch <= '2'){
        cout <<"lowercase\n";
    } else {
        cout <<"uppercase\n";
    }
    return 0;


}
