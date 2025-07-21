//Calculate N factorial
#include<iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;
    
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main(){
    cout << factorialN(4) << endl;
    cout << factorialN(5) << endl;
    return 0;
}


/*
    #include<iostream>
using namespace std;

int factorialN(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorialN(n - 1);
}

int main() {
    cout << factorialN(4) << endl;  // 24
    cout << factorialN(5) << endl;  // 120
    return 0;
}

*/
