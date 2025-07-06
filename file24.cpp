/*
Customising For Loops

You have flexibility in how you structure your for loop. For instance, you can customise the increment step to achieve specific patterns or iterate a certain number of times.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 25; i += 5) {
        cout << "i = " << i << endl;
    }
    return 0;
}

/*
Output:

i = 1
i = 6
i = 11
i = 16
i = 21

In this example, i starts at 1 and increases by 5 in each iteration, resulting in five iterations.
*/