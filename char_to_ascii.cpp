#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    system("title Char to ASCII Converter");
    char c;
    while (true) {
        cout << "Enter a character, input # to exit: ";
        cin >> c;

        if (!cin) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            continue;
        }

        if (c == '#') {
            break;
        }
        cout << "The ASCII value of '" << c << "' is: " << static_cast<int>(c) << endl;
    }
    return 0;
}