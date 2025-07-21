//Pass By Value
// Copy of argument is passed to function
// question related to pass by value
#include<iostream>
using namespace std;

void change(int x) {
    x = 2*x;
    cout << "x = " << x << endl;   
}



int main(){
    int x = 5;
    change(x);
    cout << "x = "<< x << endl;

    return 0;
}

