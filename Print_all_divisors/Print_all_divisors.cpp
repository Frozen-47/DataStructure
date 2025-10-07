#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the integer: ";
    cin >> num;

    cout << "Divisors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
