#include <iostream>
#include <string>
#include <vector>
#include "Submarine.cpp"
#include "BetterSubmarine.cpp"
#include "../utils.cpp"

using namespace std;

int main() {
    string input{};

    Submarine sub{};
    BetterSubmarine bSub{};

    while(getline(cin, input)) {
        
        vector<string> command = split(input, " ");
        int value{stoi(command[1])};

        if (command[0] == "forward") {
            sub.MoveForward(value);
            bSub.Forward(value);
        }
        else if (command[0] == "down") {
            sub.MoveDown(value);
            bSub.Down(value);
        }
        else if (command[0] == "up") {
            sub.MoveUp(value);
            bSub.Up(value);
        }
        else {
            cout << "Recieved unknown command \"" << command[0] << "\"." << endl;
        }
    }

    cout << "Submarine move value is: " << sub.MoveValue() << endl;
    cout << "The submarine move value is ACTUALLY: " << bSub.MoveValue() << endl;
}