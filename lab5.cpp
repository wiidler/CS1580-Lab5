// Programmer: Will Weidler
// Student ID: wawq97
// Section: 301
// Date: 2/28/22
// File: lab5.cpp
// Purpose: This program includes a fierce battle of rock paper scissors.

#include "judge.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(69);
    cout << "It all comes down to this!" << endl;
    int yourWins = 0;
    int judgeWins = 0;
    while (yourWins <= 1 || judgeWins <= 1){
        int game = play();
        if (game == -1){
            cout << "Your hands clash but end up gaining no ground. It's a draw this round!" << endl;
            cout << "Current standings:" << endl << "You - " << yourWins << endl << "The Judge - " << judgeWins << endl;
        }
        else if (game == 0){
            judgeWins += 1;
            cout << "You stumble back as the judge weilds his superior choice over your head. You lose this round!" << endl;
            cout << "Current standings:" << endl << "You - " << yourWins << endl << "The Judge - " << judgeWins << endl;
        }
        else if (game == 1){
            yourWins += 1;
            cout << "You muster all of your strength and take a step toward the judge, sending him flying. You win this round!" << endl;
            cout << "Current standings:" << endl << "You - " << yourWins << endl << "The Judge - " << judgeWins << endl;
        }
    }
    if (yourWins == 2){
        cout << "By flexing your superior strength, the jury has returned your verdict. You did it, you're innocent!" << endl;
    }
    else if (judgeWins == 2){
        cout << "All you managed to do was make a fool of yourself. You are slated for execution tomorrow. You're guilty!" << endl;
    }
    return 0;
}