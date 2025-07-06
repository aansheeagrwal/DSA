/*
1. Limited to Integer or Character Types:-
   Switch statements are exclusively designed to handle integer or character values. Ensure that the expression provides values of type int or char.
2. Significance of the 'Break' Keyword:-
   The 'break' keyword holds significant importance within switch cases. It serves as an exit mechanism from the switch statement. Its omission implies the execution of all subsequent cases.
3. Optional Default Case:-
   Optionally, you can include a 'default' case, which executes when none of the case values match. It's not obligatory and can be excluded if not needed.
4. Prohibition of Duplicate Case Values:-
   Within a switch statement in C++, duplicates of case values are disallowed. Each case value must be distinct.
5. Potential for Nested Switch Statements
   While it's possible to nest one switch statement inside another in C++, this practice is generally discouraged due to its potential to introduce complexity and hinder code readability.
*/
#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }

    return 0;
}