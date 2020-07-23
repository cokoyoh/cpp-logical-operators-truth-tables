#include <iostream>

using namespace std;

int main() {
    /*
     * Stream manipulator to specify that the value of each bool expression should be displayed as either the word "true" or "false"
     *
     * By default, bool values true and false are displayed by cout as 1 and 0 respectively
     */
    cout << boolalpha;

    cout << "Logical AND (&&)"
        << "\nfalse && false: " << (false && false)
        << "\nfalse && true: " << (false && true)
        << "\ntrue && false: " << (true && false)
        << "\ntrue && true: " << (true && true) << "\n\n";

    cout << "Logical OR (||)"
         << "\nfalse || false: " << (false || false)
         << "\nfalse || true: " << (false || true)
         << "\ntrue || false: " << (true || false)
         << "\ntrue || true: " << (true || true) << "\n\n";

    cout << "Logical negation (!)"
        << "\n!false: " << (!false)
        <<"\n!true: " << (!true) << endl;
}
