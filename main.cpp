#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main() {
    srand((unsigned int) time(NULL));
    
    int player_move = 0;
    int computer_move = 0;
    bool draw = false;
    
    do {
        // User prompt
        cout << "Choose your move." << endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cin >> player_move;
        cout << endl;
        
        // Computer move
        computer_move = (rand() % 3) + 1;
        if (computer_move == ROCK)
            cout << "Computer chooses Rock." << endl;
        else if (computer_move == PAPER)
            cout << "Computer chooses Paper." << endl;
        else if (computer_move == SCISSORS)
            cout << "Computer chosses Scissors." << endl;
        else
            cout << "Invalid input. Please try again." << endl;
        
        // Print result
        if (player_move == computer_move) {
            draw = true;
            cout << "Draw! Please try again." << endl;
        } else if (player_move == ROCK && computer_move == SCISSORS) {
            cout << "Rock beats Scissors! You win." << endl;
        } else if (player_move == ROCK && computer_move == PAPER) {
            cout << "Paper beats rock! You lose." << endl;
        } else if (player_move == PAPER && computer_move == ROCK) {
            cout << "Paper beats rock! You win." << endl;
        } else if (player_move == PAPER && computer_move == SCISSORS) {
            cout << "Scissors beats paper. You lose." << endl;
        } else if (player_move == SCISSORS && computer_move == PAPER) {
            cout << "Scissors beats paper. You win." << endl;
        } else if (player_move == SCISSORS && computer_move == ROCK) {
            cout << "Rock beats scissors. You lose." << endl;
        }
            
        cout << endl;
        
    } while (draw);
    
    return 0;
}
