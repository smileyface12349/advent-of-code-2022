#include <iostream>

using namespace std;

const char opponentMoves[4] = {'A', 'B', 'C', 'A'};

int day2part2() {

    string line;

    int total = 0;

    cout << "Enter the rock paper scissors game:" << endl;
    cout << "[NOTE: Press ENTER when done]" << endl;

    while (true) {
        getline(cin, line, '\n');
        if (line.empty()) {
            break;
        } else {
            char opponentMove = line.at(0);
            char outcome = line.at(2);

            if (outcome == 'Y') total += 3;
            else if (outcome == 'Z') total += 6;

            if (opponentMove == 'A') {
                if (outcome == 'X') total += 3; // scissors
                else if (outcome == 'Y') total += 1; // rock
                else total += 2; // paper
            } else if (opponentMove == 'B') {
                if (outcome == 'X') total += 1; // rock
                else if (outcome == 'Y') total += 2; // paper
                else total += 3; // scissors
            } else {
                if (outcome == 'X') total += 2; // paper
                else if (outcome == 'Y') total += 3; // scissors
                else total += 1; // rock
            }

        }
    }

    cout << "Total points: " << total << endl;

}