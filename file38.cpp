
// WAP to print all prime numbers from 1 to N
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    
    for(int num = 2;num <= n; num++){
        bool isPrime = true;
        
        //check if num is prime
        for(int i = 2; i<num;i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        
        cout << num << " ";
    }
    

    
     
    return 0;
}

