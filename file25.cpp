/*
While Loops in Programming:-
In the world of computer programming, loops are invaluable tools that allow us to execute a block of code repeatedly until a certain condition is met. One such loop is the "while" loop.

A while loop follows a simple sequence of steps:

1.Evaluation of Test Expression: The loop begins by evaluating a test expression.
2.Condition Check: If the test expression is true, the code inside the loop's body is executed.
3.Re-evaluation: After executing the code, the test expression is evaluated again.
4.Continuation or Termination: This process continues until the test expression becomes false, at which point the while loop terminates.

5.Syntax:-

while (condition) {
    // body of the loop
}
A while loop is a control structure in programming that repeatedly executes a block of code as long as a specified condition remains true. A "while" loop will not execute the code at all if the initial condition is false. It relies on the condition being true from the outset for any code execution to occur.
While loops can be best illustrated with the practical example of finding the Factorial. Factorial of a number 'n' is the product of all positive integers from 1 to 'n'. To compute this using a while loop, we initialise a factorial variable to 1 and repeatedly multiply it by 'n' while decrementing 'n' until 'n' becomes 0. This ensures that we calculate the factorial correctly.

*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int factorial = 1;

    while (n > 0) {
        factorial *= n;
        n--;
    }

    cout << "Factorial of 5 is: " << factorial << endl;

    return 0;
}

/*
Output:

Factorial of 5 is: 120
*/