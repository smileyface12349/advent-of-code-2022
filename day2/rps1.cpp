#include <iostream>

using namespace std;

const char opponentMoves[4] = {'A', 'B', 'C', 'A'};

int day2part1() {

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
            char playerMove = line.at(2);

            if (playerMove == 'X') {
                total += 1;
                if (opponentMove == 'A') {
                    total += 3;
                } else if (opponentMove == 'C') {
                    total += 6;
                }
            } else if (playerMove == 'Y') {
                total += 2;
                if (opponentMove == 'B') {
                    total += 3;
                } else if (opponentMove == 'A') {
                    total += 6;
                }
            } else if (playerMove == 'Z') {
                total += 3;
                if (opponentMove == 'C') {
                    total += 3;
                } else if (opponentMove == 'B') {
                    total += 6;
                }
            }
        }
    }

    cout << "Total points: " << total << endl;

    return 0;

}