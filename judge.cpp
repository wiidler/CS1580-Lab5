#include "judge.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
int play(string userChoice, string judgeChoice) {
    static int rounds = 1;
    cout << "What do you choose?" << endl;
    cin >> userChoice;
    if ((rounds % 2) == 1){
        int choice = (rand() % 3) + 1;
        switch(choice){
            case 1:
                judgeChoice = "Rock";
                break;
            case 2:
                judgeChoice = "Paper";
                break;
            case 3:
                judgeChoice = "Scissors";
                break;
        }
    }
    cout << endl << "Judge chose: " << judgeChoice << endl;
    if (judgeChoice == "Rock"){
        if (userChoice == "Rock" || userChoice == "rock"){
            rounds++;
            return -1;
        }
        else if (userChoice == "Scissors" || userChoice == "scissors"){
            rounds++;
            return 0;
        }
        else if (userChoice == "Paper" || userChoice == "paper"){
            rounds++;
            return 1;
        }
    }
    else if (judgeChoice == "Paper"){
        if (userChoice == "Rock" || userChoice == "rock"){
            rounds++;
            return 0;
        }
        else if (userChoice == "Scissors" || userChoice == "scissors"){
            rounds++;
            return 1;
        }
        else if (userChoice == "Paper" || userChoice == "paper"){
            rounds++;
            return -1;
        }        
    }
    else if (judgeChoice == "Scissors"){
        if (userChoice == "Rock" || userChoice == "rock"){
            rounds++;
            return 1;
        }
        else if (userChoice == "Scissors" || userChoice == "scissors"){
            rounds++;
            return -1;
        }
        else if (userChoice == "Paper" || userChoice == "paper"){
            rounds++;
            return 0;
        }
    }
    cout << "You use this turn to form a... (concerning?) hand sign. The judge looks at you weird. Throw 'rock', 'paper' or 'scissors'!" << endl << endl;
    return 69;
}