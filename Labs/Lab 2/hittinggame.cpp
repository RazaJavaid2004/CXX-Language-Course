#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class HittingGame {
    int teamPlayers;
    int yourTeamHits;
    int enemyTeamHits;
    public:
    HittingGame() {
        srand(time(0));
        teamPlayers = rand() % 3 + 1;
        yourTeamHits = 0;
        enemyTeamHits = 0;
    }
    void playGame();
    void displayResults();
};

void HittingGame :: playGame() {
    cout << "Total Number of Players in Your Team: " << teamPlayers << endl;
    
    for(int i = 0; i < teamPlayers; i++) {
        int number1 = rand() % 3 + 1;
        int number2 = rand() % 3 + 1;

        cout << "Pair of Numbers: " << endl;
        cout << "Number1: " << number1 << endl;
        cout << "Number2: " << number2 << endl;

        if(number1 == number2) {
            cout << "Enemy got hit by Your Team!" << endl;
            yourTeamHits++;
        }
        else {
            cout << "You got hit by the Enemy Team!" << endl;
            enemyTeamHits++;
        }
    }
}

void HittingGame :: displayResults() {
    cout << "Final Results: " << endl;
    cout << "Your Team Hits: " << yourTeamHits << endl;
    cout << "Enemy Team Hits: " << enemyTeamHits << endl;

    if(yourTeamHits > enemyTeamHits) {
        cout << "Game Over! You Won" << endl;
    }
    else if(yourTeamHits < enemyTeamHits) {
        cout << "Game Over! You Lost" <<endl;
    }
    else {
        cout << "Game Over! It's a Tie" <<endl;
    }
}

int main() {
    HittingGame game;
    game.playGame();
    game.displayResults();

    return 0;
}