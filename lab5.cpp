// Programmer: Will Weidler
// Student ID: wawq97
// Section: 301
// Date: 2/28/22
// File: lab5.cpp
// Purpose: This program includes a fierce battle of rock paper scissors.

#include "judge.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(11); // random seed of 11
    cout << "It all comes down to this!" << endl;
    int userWins = 0; // variables for each player wins
    int judgeWins = 0; // above
    while (userWins < 2 && judgeWins < 2){ // loop continues until one player gets 2 wins
        int game = play();
        if (game == -1){ // "-1" = draw
            cout << "Your hands clash but end up gaining no ground." << endl << "It's a draw this round!" << endl << endl;
            cout << "Current standings:" << endl << "You - " << userWins << endl << "The Judge - " << judgeWins << endl << endl; 
        }
        else if (game == 0){ // "0" = loss for user
            judgeWins++;
            cout << "You stumble back as the judge weilds his superior choice over your head." << endl << "You lose this round!" << endl << endl;
            cout << "Current standings:" << endl << "You - " << userWins << endl << "The Judge - " << judgeWins << endl << endl;
        }
        else if (game == 1){ // "1" = win for user
            userWins++;
            cout << "You muster all of your strength and take a step toward the judge, sending him flying." << endl << "You win this round!" << endl << endl;
            cout << "Current standings:" << endl << "You - " << userWins << endl << "The Judge - " << judgeWins << endl << endl;
        }
    }
    if (userWins == 2){ // if the while loop is exited, if the user is the cause of that (wins greater than 1) this output occurs
        cout << "By flexing your superior strength, the jury has returned your verdict." << endl << "You did it, you're innocent!" << endl << endl;
    }
    else if (judgeWins == 2){ // if the while loop is exited, if the judge is the cause of that (wins greater than 1) this output occurs
        cout << "All you managed to do was make a fool of yourself. You are slated for execution tomorrow." << endl << "You're guilty!" << endl << endl;
    }
    return 0;
}