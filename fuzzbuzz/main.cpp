#include<iostream>
#include<string>

// No comment.
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Create string and fill it with characters from cin.
    string str;
    cin >> str;

    // Create number that is equal to NUMBER % 3 as result of the program.
    int threemod = 0;
    // Create iterator
    string::iterator it = str.begin();

    // If we have no number, the condition will work.
    if (*it < '0' || *it > '9') {
        cout << "ERROR: YOU DIDN'T INPUT NUMBER." << endl << "YOU MAKE ME FELL BAD =(" << endl;
        return 1;
    }

    /* Run along the number and stop under condition:
     * 1. End of the string.
     * 2. There are other symbols that you input after number.
     * */
    while(it != str.end()) {
        // This string isn't in the condition above because of the possible errors
        if (*it < '0' || *it > '9') break;
        // If all good, we count summary of the digits of the number below
        threemod += *it - '0';

        it++;
    }

    /* If summary more than 2, we reduce it.
     * Asymptotic of the number of the operations is equal 3 * log NUMBER.
     * */
    while (threemod > 2) {
        threemod -= 3;
    }

    // NUMBER % 3 => cout fuzz
    if (threemod == 0) {
        cout << "fuzz";
    }

    // NUMBER % 5 => cout buzz
    if(*(str.end()-1) == '0' || *(str.end()-1) == '5') {
        cout << "buzz";
    }

    // YEEEEAH, WE DID IT!
    return 0;
}