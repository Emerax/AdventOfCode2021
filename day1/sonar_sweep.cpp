#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input{};

    //Get the starting value.
    getline(cin, input);
    int previous{stoi(input)};

    unsigned increments{};

    while (getline(cin, input)) {
        int next{stoi(input)};

        if (next > previous) {
            ++increments;
        }

        previous = next;
    }

    cout << "Sonar detected " << increments << " increments!" << endl;
}