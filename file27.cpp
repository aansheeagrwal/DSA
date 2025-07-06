#include <iostream>
using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularize code.
// Functions are used to increase readability.
// Functions are used to use same code multiple terms.
// void -> which does not returns anything.
// return
// parametrised
// non parametrised

// Take two numbers and print its sum
void sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << num3;
}
int main(){
    int num1, num2;
    cin>> num1 >> num2;
    sum(num1, num2);
    return 0;


}



