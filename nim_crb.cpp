/*The Game of NIM Functions
 * Carrie Bailey
 * Version 1.0
 * Description: Nim is a mathematical strategy game, which dates back to 16th century China. The game consists
of two players taking turns removing objects and whomever ends up removing the last one wins.
Write a program which implements the following version of the game of Nim.
*/

#include <iostream>
#include "nim_crb.hpp"

using namespace std;

const char STICK = '|';
const int BIG_NUM = 100;
const char EOL = '\n';

//USER WELCOME
void showInstructions() {
    cout << "Welcome to NIM!" << endl;
    cout << "Each player will take turns taking 1, 2, or 3 sticks from the ";
    cout << "board which starts with 11 sticks. The player removing the last stick wins!" << endl;
}

//int turn(string player) {
//    cout
//    "It is " << player << "'s turn."
//}


int getMove(int numSticks) {
//        turn(player);
    int number;

    cout << endl << endl;//solicits game play
    cout << "How many sticks would you like to remove? (1, 2, or 3) " << endl << endl;
    cin >> number;
    if ((!cin) or (number < 1) or (number > 3)) {
        if (number > numSticks) {//does not allow a player to take more sticks
            //than those that remain
            cout << "can not take more sticks than remain, try again " << endl << endl;
        } else {
            cout << "Invalid move, try again ";//does not allow player to choose fewer
            //or more sticks than allowed per turn, prints invalid statement and takes
            //them back to the top of the loop
        }
        // clear buffer
        cin.clear();
        cin.ignore(BIG_NUM, EOL);
        cin >> number;

        //while (the_move<1 or the_move> 3 or the_move > num_sticks);
//
//// UPDATE # STICKS
//numSticks -=
//the_move;


// CHECK FOR WINNER
        if (numSticks <= 0)
//END OF GAME LOOP
        {
            cout << "WINNER WINNER CHICKEN DINNER! Great job Player " << player << " !" <<endl;

    }
}

int showBoard(int numSticks) {
    cout << "The game board is:" << endl << endl;
    for (int i = 0; i < numSticks; i++) {
        cout << STICK;
    }

    char playAgain(){
  char answer;
    cout << "Would you like to play again? y/n";
    cin >> answer;
// convert to lower case
    answer = tolower(answer);

// validate response
    do {
        if (answer != 'y' and answer != 'n') {
            cout << "Invalid response, must be y or n";
// clear buffer for new response
            cin.clear();
            cin.ignore(BIG_NUM, EOL);
// get new response
            cin >> answer;
// convert to lower case
            answer = tolower(answer);
        }
    } while (answer != 'y' and answer != 'n');
    if (answer == 'n') {
        return false;
    } else {
        return true
    }


    cout << "Nice playing with you. Goodbye!" << endl;

    return 0;
}

//VALIDATION



//playing = false;//once number of sticks is zero, prints winner message,
//playing becomes false so the while loop checks the expression and ends
}


return 0;
}
