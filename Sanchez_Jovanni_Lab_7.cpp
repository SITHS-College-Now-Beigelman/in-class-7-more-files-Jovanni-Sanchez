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
     int currentPlayer;  // Used for iteration
     ifstream inputFile; // Used whenever referring to the input file

     inputFile.open("game_scores.txt"); // Opens the input file

     // Start on the 1st player, end on the 3rd player
     for (currentPlayer = 1; currentPlayer <= 8; currentPlayer++)
     {
          double player1stScore;   // Assigned to the player's 1st score
          double player2ndScore;   // Assigned to the player's 2nd score
          double player3rdScore;   // Assigned to the player's 3rd score
          double gameScoreAverage; // Assigned to the average score
          string xboxLiveGamertag; // Assinged to the players name

          /* Get the player's name, 1st score, 2nd score, and 3rd score from the current line
          of the input file */
          inputFile >> xboxLiveGamertag >> player1stScore >> player2ndScore >> player3rdScore;

          /* The 1st score is 20%, the 2nd score is 30%, and the 3rd score is 50% of the total.
          Divide the total by 3 (the number of scores) to get an average. */
          gameScoreAverage = ((player1stScore * 0.2) + (player2ndScore * 0.3) + (player3rdScore * 0.5)) / 3;

          // Print the players number and name
          cout << "Player " << currentPlayer << " - "
               << '"' << xboxLiveGamertag << '"' << ":\n";

          /*
          Here the corresponding statement for the average is determined and printed:
           • If the average is over 2000, then the player is an expert
           • If the average is between 1800 and 2000, then the player is a master
           • If the average is between 1500 and 1799, then the player is advanced
           • If the average is between 1000 and 1499, then the player is an intermdiate
           • Anything else below 1000, the player is a beginner
          */

          if (gameScoreAverage > 2000)
          {
               cout << "Congrats! You're an Expert!" << "\n";
          }
          else if (gameScoreAverage >= 1800 && gameScoreAverage <= 2000)
          {
               cout << "Master - Good Job!" << "\n";
          }
          else if (gameScoreAverage >= 1500 && gameScoreAverage <= 1799)
          {
               cout << "Advanced - Good Job!" << "\n";
          }
          else if (gameScoreAverage >= 1000 && gameScoreAverage <= 1499)
          {
               cout << "Intermediate." << "\n";
          }
          else
          {
               cout << "Beginner - Keep Practicing!" << "\n";
          }

          // Prints out the player's name and average
          cout << xboxLiveGamertag << "'s average score is "
               << gameScoreAverage
               << ".\n";

          // Prints out the individual scores the player had
          cout << "Score 1 = " << player1stScore << " / "
               << "Score 2 = " << player2ndScore << " / "
               << "Score 3 = " << player3rdScore << "\n\n";
     }
}