#include <iostream>
using namespace std;

int main(){
    cout << "BattleShip v1.0 Local Text Based War Game" << "\n";

    //1 indicate there's a ship
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    //keep track of hits and turns
    int hits = 0;
    int numberOfTurns = 0;

    //allow keep going until hit all 4 ships
    while(hits < 4){
        int row, column;
        cout << "Selecting coordinates\n";
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        //check if ship exists
        if(ships[row][column]){
            //hit the ship, set to 0
            ships[row][column] = 0;
            hits++;
            //hits result
            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            cout << "Nah, You missed! Please try again.\n";
        }
        numberOfTurns++; //turns taken
    }
    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";


    return 0;
}