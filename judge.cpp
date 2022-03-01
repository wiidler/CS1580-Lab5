#include "judge.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
int play(string userChoice, string judgeChoice) {
    string userChoice = "";
    string judgeChoice = "Rock";
    static int rounds = 1;
    cout << "What do you choose?" << endl << endl;
    cin >> userChoice;
    if (rounds == 1){
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
    if (judgeChoice == "Rock"){
        if (userChoice == "Rock"){
            rounds++;
            return -1;
        }
        else if (userChoice == "Scissors"){
            rounds++;
            return 0;
        }
        else if (userChoice == "Paper"){
            rounds++;
            return 1;
        }
    }
    else if (judgeChoice == "Paper"){
        if (userChoice == "Rock"){
            rounds++;
            return 0;
        }
        else if (userChoice == "Scissors"){
            rounds++;
            return 1;
        }
        else if (userChoice == "Paper"){
            rounds++;
            return -1;
        }        
    }
    else if (judgeChoice == "Scissors"){
        if (userChoice == "Rock"){
            rounds++;
            return 1;
        }
        else if (userChoice == "Scissors"){
            rounds++;
            return -1;
        }
        else if (userChoice == "Paper"){
            rounds++;
            return 0;
        }
    }
    return 69;
}