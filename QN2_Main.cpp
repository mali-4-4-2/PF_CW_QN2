#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printDivisors(int number) {
    std::vector<int> divisors;

    // Find all divisors
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }

    // Print divisors in decreasing order
    for (auto it = divisors.rbegin(); it != divisors.rend(); ++it) {
        cout << *it << endl;
    }
}

int main() {
    int number;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "The program will repeatedly prompt you to enter a positive integer.\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";

    while (true) {
       cout << "Please enter a positive integer: ";
     cin >> number;

        if (number <= 0) {
            if (number < 0) {
               cout << number << " is not a positive integer." << endl;
            } else {
                cout << "0 is not a positive integer." << endl;
            }
            continue;  // Prompt again
        }

        printDivisors(number);

       cout << "Would you like to see the divisors of another integer (Y/N)? ";
    cin >> choice;

        if (choice == 'N' || choice == 'n') {
            break;  // Exit the loop
        } else if (choice != 'Y' && choice != 'y') {
           cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
        }
    }

    cout << "Program terminated." << endl;
    return 0;
}
