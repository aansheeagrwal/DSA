/*
print the pattern 
A
B B
C C C
D D D D D
E E E E E E

*/



#include<bits/stdc++.h>
using namespace std;
void print16(int n) {

    for(int i = 0;i<n;i++) {
        // i = 2
        char ch ='A' + i;
        for(int j=0;j<=i;j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i =0;i<t;i++) {
        int n;
        cin >> n;
        print16(n);
    }
}