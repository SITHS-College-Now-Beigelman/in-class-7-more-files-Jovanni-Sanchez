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
     int currentPlayer;
     ifstream inputFile;

     inputFile.open("game_scores.txt");

     for (currentPlayer = 1; currentPlayer <= 8; currentPlayer++)
     {
          double player1stScore;
          double player2ndScore;
          double player3rdScore;
          double gameScoreAverage;
          string xboxLiveGamertag;

          inputFile >> xboxLiveGamertag >> player1stScore >> player2ndScore >> player3rdScore;

          gameScoreAverage = ((player1stScore * 0.2) + (player2ndScore * 0.3) + (player3rdScore * 0.5)) / 3;

          cout << "Player " << currentPlayer << " - "
               << '"' << xboxLiveGamertag << '"' << ":\n";

          if (gameScoreAverage > 2000)
          {
               cout << "Congrats! You're an Expert!" << "\n";
          }
          else if (gameScoreAverage >= 1800 && gameScoreAverage <= 2000)
          {
               cout << "Master - Good Job!" << "\n";
          }
          else if (gameScoreAverage >= 1500 && gameScoreAverage <= 1800)
          {
               cout << "Advanced - Good Job!" << "\n";
          }
          else if (gameScoreAverage >= 1000 && gameScoreAverage <= 1500)
          {
               cout << "Intermediate." << "\n";
          }
          else
          {
               cout << "Beginner - Keep Practicing!" << "\n";
          }

          cout << xboxLiveGamertag << "'s average score is "
               << gameScoreAverage
               << ".\n";

          cout << "Score 1 = " << player1stScore << " / "
               << "Score 2 = " << player2ndScore << " / "
               << "Score 3 = " << player3rdScore << "\n\n";
     }
}