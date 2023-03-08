#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //write file
    //create and open text file
    ofstream TheFile("./file.log");
    //write file
    //write to a file using << insertion operator
    TheFile << "Files can be tricky, but it's fun enough!\nThe second line of text is here\n";
    //close the file, clean up memory
    TheFile.close();

    //read file
    string logs;

    //read from text file
    ifstream ReadFile("./file.log");
    while (getline(ReadFile, logs)){
        cout << "Read line: " << logs << "\n";
    }
    ReadFile.close();


    return 0;
}
