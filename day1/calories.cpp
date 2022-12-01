#include <iostream>

using namespace std;

int day1part1() {

    int line_int;
    string line;

    int current;
    int largest;

    int blankLines = 0;

    cout << "Enter the calories below:" << endl;
    cout << "[NOTE: Press ENTER twice when done]" << endl;

    while (blankLines <= 1) {
        getline(cin, line, '\n');
        if (line.empty()) {
            if (current > largest) {
                largest = current;
            }
            current = 0;
            blankLines += 1;
        } else {
            line_int = stoi(line);
            current += line_int;
            blankLines = 0;
        }
    }

    cout << "Largest value is: " << largest;

}
