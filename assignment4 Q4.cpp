#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string username;
    bool isValid = true;

    cout << "Enter a username: ";
    cin >> username;

    // Check length of username
    if (username.length() < 6 || username.length() > 12) {
        isValid = false;
    }

    // Check if username only contains letters and digits
    for (int i = 0; i < username.length(); i++) {
        if (!isalnum(username[i])) {
            isValid = false;
            break;
        }
    }

    // Check if first character is a letter
    if (!isalpha(username[0])) {
        isValid = false;
    }

    if (isValid) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is not valid." << endl;
    }

    return 0;
}

