// October 29, 2024
// Jovanni Sanchez
// Lab 7

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

/* Suppose that you know that the file game_scores.txt contains the scores for three players and
their name. Each player has received 3 scores. For each player; Score one is 20% of the player’s
average, score two is 30% of the player’s average and score three is 50% of the player’s average.
Determine the average or each player and print out the corresponding statement. */

int main()
{
    ifstream inputFile;
    int currentPlayer = 1;

    inputFile.open("game_scores.txt");

    while (!inputFile.eof())
    {
        double temp1stScore;
        double temp2ndScore;
        double temp3rdScore;
        double tempScoreAverage;
        string xboxLiveGamertag;

        inputFile >> xboxLiveGamertag >> temp1stScore >> temp2ndScore >> temp3rdScore;

        tempScoreAverage = (temp1stScore + temp2ndScore + temp3rdScore) / 3;

        cout << "Player " << currentPlayer << " - "
             << '"' << xboxLiveGamertag << '"' << ":\n";

        cout << xboxLiveGamertag << "'s average score is "
             << (temp1stScore + temp2ndScore + temp3rdScore) / 3
             << ".\n";

        cout << "Score 1 = " << (temp1stScore / tempScoreAverage) << " / "
             << "Score 2 = " << (temp2ndScore / tempScoreAverage) << " / "
             << "Score 3 = " << (temp3rdScore / tempScoreAverage) << "\n\n";

        currentPlayer++;
    }
}