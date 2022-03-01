#ifndef JUDGE_H
#define JUDGE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/***********************FUNCTION PROTOTYPES***********************/
// Description: This function contains a rock paper scissors game where the opponent plays a random choice the first round and rock every round prior.
// Pre: None
// Post: None, a value is returned that is used in the main function.
int play(string userChoice = "", string judgeChoice = "Rock");

#endif