#include<iostream>
#include<string>

int main()
{
    std::string str;

    std::cin >> str;

    int i = 0;

    for(std::string::iterator it = str.begin(); it != str.end(); it++) {
        i += *it - '0';

        while (i > 2) {
            i -= 3;
        }
    }

    if (i == 0) {
        std::cout << "fuzz";
    }
    if(*(str.end()-1) == '0' || *(str.end()-1) == '5') {
        std::cout << "buzz";
    }

    return 0;
}