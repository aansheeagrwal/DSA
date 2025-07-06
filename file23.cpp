/*
Nested For Loops:-
Just like for loops, you can nest one for loop inside another. This concept becomes incredibly useful when you're working with multi-dimensional data structures like a 2-D Array or need to solve complex problems involving multiple iterations.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
            // Nested loop code
        }
    }
    return 0;
}

/*
Output:

i = 0, j = 0
i = 0, j = 1
i = 0, j = 2
i = 1, j = 0
i = 1, j = 1
i = 1, j = 2
i = 2, j = 0
i = 2, j = 1
i = 2, j = 2
*/

/*
Conditionals Inside For Loops:-

For loops are versatile; you can include conditional statements (if, else if, else) within them. This allows you to execute different code blocks based on certain conditions during each iteration.

for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        // Code for even numbers
    } else {
        // Code for odd numbers
    }
}
*/

