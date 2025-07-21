// Online C++ compiler to run C++ program online
// Ques:- Calculate Sum of Numbers from 1 to N
#include<iostream>
using namespace std;

int sumN(int n) {
    int sum = 0;
    
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    
    return sum;
}

int main(){
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}

//#include<iostream>
//using namespace std;

//int sumN(int n) {
    //return n * (n + 1) / 2;
//}

//int main() {
   // cout << sumN(5) << endl;   // 15
    //cout << sumN(10) << endl;  // 55
    //return 0;
//}
