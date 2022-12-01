#include <iostream>

using namespace std;

int minIndex(const int array[3]) {
    int smallest = 99999999;
    int smallestIndex = 0;
    for (int i = 0; i < 3; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

int main() {

    int line_int;
    string line;

    int current;
    int largest[3];

    int blankLines = 0;

    cout << "Enter the calories below:" << endl;
    cout << "[NOTE: Press ENTER twice when done]" << endl;

    while (blankLines <= 1) {
        getline(cin, line, '\n');
        if (line.empty()) {
            // Find the smallest value
            int smallestIndex = minIndex(largest);

            // Check if this is larger and if so, override
            if (current > largest[smallestIndex]) {
                largest[smallestIndex] = current;
            }

            // Update the variables
            current = 0;
            blankLines += 1;
        } else {
            line_int = stoi(line);
            current += line_int;
            blankLines = 0;
        }
    }

    cout << "Top 3 elves have " << largest[0] + largest[1] + largest[2] << " calories in total";

}
