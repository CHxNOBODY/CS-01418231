#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a number to find Factorial: ";
        cin >> num;

        if (num < 0) {
            cout << "Error! Factorial of a negative number doesn't exist." << endl;
        } else {
            cout << "Factorial of " << num << " = " << factorial(num) << endl;
        }

        cout << "Do you want to calculate another number? (y/n): ";
        cin >> choice;
        cout << "----------------------------------------" << endl;

    } while (choice == 'y' || choice == 'Y'); 

    cout << "Program Ended." << endl;
    return 0;
}