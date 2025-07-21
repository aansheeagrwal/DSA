//Pass By Value
// Copy of argument is passed to function
#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}


int main(){
    int x = 5, y = 4;
    cout << sum(x, y) << endl;
    return 0;
}

