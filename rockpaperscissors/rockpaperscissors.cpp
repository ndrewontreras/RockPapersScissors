// Andrew Contreras - 'Rock, Paper, Scissors' Console App - 06/05/24
// User will play rock, paper, scissors against a CPU.

#include <iostream>
#include<cstdlib>
using namespace std;

char userInput, cpuChoice;
char cpuChoices[] = { 'r', 'p', 's' };


void getCpuChoice()
{
    srand((unsigned)time(NULL));
    int random = rand() % 3;


    for (int i = 0; i < sizeof(cpuChoices); i++) {
        if (random == i) {
            cpuChoice = cpuChoices[i];
        }

    }
}

void isWinner()
{
    getCpuChoice();
    cout << endl;

    if (cpuChoice == 'r') {
        switch (userInput) {
        case 'p':
            cout << "User picks paper, Jope picks rock! \n User wins!";
        case 's':
            cout << "User picks scissors, Jope picks rock! \n Jope wins!";
        }
    }

    if (cpuChoice == 'p') {
        switch (userInput) {
        case 'r':
            cout << "User picks rock, Jope picks paper! Jope wins!";
        case 's':
            cout << "User picks scissors, Jope picks paper! User wins!";
        }
    }

    if (cpuChoice == 's') {
        switch (userInput) {
        case 'r':
            cout << "User picks rock, Jope picks scissors! User wins!";
        case 'p':
            cout << "User picks paper, Jope picks scissors! Jope wins!";
        }
    }

    if (cpuChoice == userInput) {
        cout << "Tie!";
    }

    cout << endl;
}


int main()
{
       
    std::cout << "Welcome to Rock Paper Scissors w/ Jope!\n";
    while (userInput != 'q') {
        std::cout << "Please enter one of the following: \n 'r' for rock\n 'p' for paper\n 's' for scissors\n\n 'q' to quit\nUser choice: ";
        cin >> userInput;
        isWinner();
    }

    cout << "Thank you for playing w/ Jope!" << endl;
    return 0;

}

