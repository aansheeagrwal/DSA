/*
What is a For Loop and Why is it Used?

A for loop is a control structure in programming that allows you to execute a specific block of code repeatedly. It's especially useful when you want to perform the same task multiple times without duplicating your code. Let's break down the essential components of a for loop:

1. Initialization: You declare and initialize a variable that serves as a counter. This step only happens once at the beginning.
2. Condition: You specify a condition that determines when the loop should stop executing.
3. Increment/Decrement: You define how the counter variable changes after each iteration.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    }
    return 0;
}
/*
Output:

Hey, Striver, this is the 1'th iteration
Hey, Striver, this is the 2'th iteration
Hey, Striver, this is the 3'th iteration
Hey, Striver, this is the 4'th iteration
Hey, Striver, this is the 5'th iteration
Hey, Striver, this is the 6'th iteration
Hey, Striver, this is the 7'th iteration
Hey, Striver, this is the 8'th iteration
Hey, Striver, this is the 9'th iteration
Hey, Striver, this is the 10'th iteration
*/

/*
In this example, the loop will run ten times because it starts with i equal to 1, and the condition is met until i becomes 11 then the loop breaks. The variable i is incremented by 1 in each iteration.
*/

/*
1. Start: The process begins at the "start" point, indicating the beginning of the loop.
2. Initialize counter:  In this step, the loop control variable is initialised. This typically involves assigning an initial value to the counter. Usually denoted by the variable ‘i’
3. Condition check: The condition for the loop is checked in this stage. If the condition is evaluated as "true," the loop continues to execute; otherwise, it terminates.
4. If the condition is "true," the loop proceeds to execute the loop body and increment/decrement the counter.
5. After completing an iteration, the process returns to the "Condition check" step to re-evaluate the condition.
6. After executing the loop body, the counter is incremented or decremented. This step is crucial for controlling the loop's termination.
7. The loop continues to execute as long as the condition remains "true." Once the condition becomes "false," the loop exits.
8. After exit from the loop, the code below the for-loop is executed and the program moves on.
*/

