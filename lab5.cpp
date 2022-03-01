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
    if (play() == 1){
        cout << "yay";
    }
    return 0;
}