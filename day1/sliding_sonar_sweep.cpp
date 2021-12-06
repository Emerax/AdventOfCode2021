#include <iostream>
#include <sstream>
#include <string>

using namespace std;

unsigned next_index(unsigned index) {
    return (index + 1) % 3;
}

int main() {
    string input{};
    
    unsigned increments{};

    int sums[3]{};
    unsigned previous_index{0};

    //Input the first three values so previous has a full value
    getline(cin, input);
    int value{stoi(input)};
    sums[0] += value;

    getline(cin, input);
    value = stoi(input);
    sums[0] += value;
    sums[1] += value;

    getline(cin, input);
    value = stoi(input);
    sums[0] += value;
    sums[1] += value;
    sums[2] += value;

    while (getline(cin, input)) {
        int value{stoi(input)};

        //Add value to the first box, this is now full and shuld be compared to the previous full value.
        unsigned i{next_index(previous_index)};
        sums[i] += value;
        if (sums[i] > sums[previous_index]) {
            ++increments;
        }

        //As the first box is full, update the marker index
        previous_index = i;

        //add value to the next box.
        i = next_index(i);
        sums[i] += value;

        //Last full box is spent, overwrite it with a new value to start a new box.
        i = next_index(i);
        sums[i] = value;
    }


    cout << "Sonar detected " << increments << " increments!" << endl;
}