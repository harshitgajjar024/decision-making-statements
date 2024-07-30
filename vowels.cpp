#include <iostream>
using namespace std;

int main() {
    char ch;

   
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
       
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << " is a vowel" << endl;
        } else {
            cout << " is a consonant" << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}