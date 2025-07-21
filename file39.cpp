
// WAP to print nth Fibonacci
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    
    int a = 0, b = 1,c;
    
    if(n == 0){
        cout << "Nth Fibonacci number is: " << a << endl;
        return 0;
    }
    
    for(int i = 2;i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    
    cout << "Nth Fibonacci number is: " << b << endl;
    return 0;
}

