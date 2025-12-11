#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {   // check if i is odd
            sum += i;       // add it to sum
        }
    }

    cout << "Sum of all odd numbers from 1 to 100 = " << sum << endl;
    return 0;
}
