#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i < 10){
        i++;
        cout << i << endl;
    }

    //do while loop
    int j = 0;
    do {
        cout << j << "\n";
        j++;
    }
    while(j<5);

    for (int j = 0; j < 5; j++){
        cout << j << "\n";
    }

    //outer + inner loop
    for (int k = 0; k <= 2; ++k){
        cout << "Outer: " << k << "\n";
        for(int v = 0; v <= 5; ++v){
            cout << "Inner: " << v << "\n";
        }
    }

    //foreach
    //NOTE: go to .vscode folder > tasks.json 
    //add "-std=c++11" inside arguments before the filename argument
    //to support c++11
    string langs[5] = {"English", "Chinese", "Japanese", "Korean", "Tagalog"};
    for (string l : langs) {
        if (l == "Japanese"){
            //break;
            continue;
        }
        cout << l << "\n";
    }
    for (int lg = 0; lg < 5; lg++){
        cout << langs[lg] << "\n";
    }

    //omit array size
    string cars[] = {"Tesla", "PYD", "Hua Wei"};
    //with size
    string space[3] = {"Spacex", "NASA", "CASA"};
    //omit element on declaration
    string clangs[3];
    clangs[0] = "C++";
    clangs[1] = "Java";
    clangs[2] = "Go";

    //getting size of array
    cout << sizeof(clangs) << ", " << sizeof(space) << ", " << sizeof(cars) << "\n";
    //return 96 as 96 bytes
    //to get array length
    cout << "Size of string is: " << sizeof(string) << " bytes\n";
    cout << sizeof(clangs)/sizeof(string) << "\n";

    //loop with sizeof
    for (int r = 0; r < sizeof(space)/sizeof(string); r++){
        cout << "Space Company " << space[r] << "\n";
    }

    int myNum[5] = {10, 20, 30, 40, 50};
    for (int g : myNum){
        cout << g << "\n";
    }

    //multi dimensional array /2d
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    cout << letters[0][2] << "\n"; //C
    letters[0][2] = "KC";
    cout << letters[0][2] << "\n";
    for(int f = 0; f < 2; f++){
        for(int s = 0; s < 4; s++){
            cout << letters[f][s] << "\n";
        }
    }
    //3d
    string letters3d[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },{
            {"E", "F"},
            {"G", "H"}
        }
    };
    cout << letters3d[1][1][1] << "\n";

    return 0;
}