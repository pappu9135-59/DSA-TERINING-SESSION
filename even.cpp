#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 4;

    // Print the product 5 times
    for (int i = 0; i < 5; i++) {
        int product = a * b;
        cout << "Iteration " << i + 1 << ": The product is " << product << endl;
    }

    return 0;
}