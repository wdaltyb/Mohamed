#include <iostream>
#include <vector>
using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess;
    vector<int> allGuesses;

    cout << "Guess the number (I chose 7):" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> userGuess;
        allGuesses.push_back(userGuess);

        if (userGuess > chosenNumber)
            cout << "Too high" << endl;
        else if (userGuess < chosenNumber)
            cout << "Too low" << endl;
        else {
            cout << "Correct" << endl;
            break;
        }
    }

    cout << "\nYour guesses: ";
    for (int i = 0; i < allGuesses.size(); i++)
        cout << allGuesses[i] << " ";
    cout << endl;

    return 0;
}