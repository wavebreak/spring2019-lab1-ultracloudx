//
// Created by William Smith on 2019-02-07.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userLine;

    cout << "Enter text:" << endl;
    getline(cin, userLine);
    cout << "You entered: " << userLine << endl;

    if (userLine.find("IDK") != string::npos) {
        userLine = userLine.replace(userLine.find("IDK"), 3, "I don't know");
    }
    else if (userLine.find("BFF") != string::npos) {
        userLine = userLine.replace(userLine.find("BFF"), 3, "best friend forever");
    }
    else if (userLine.find("JK") != string::npos) {
        userLine = userLine.replace(userLine.find("JK"), 2, "just kidding");
    }
    else if (userLine.find("TMI") != string::npos) {
        userLine = userLine.replace(userLine.find("TMI"), 3, "too much information");
    }
    else if (userLine.find("TTYL") != string::npos) {
        userLine = userLine.replace(userLine.find("TTYL"), 4, "talk to you later");
    }

    cout << "Expanded: " << userLine << endl;




    return 0;
}