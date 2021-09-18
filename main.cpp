#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void questions(){
    ofstream outf("results.txt", ios :: app);
    ifstream inf("inputfile.txt");
    string question, answer_type, answer;
    while(getline(inf, question)){
        getline(inf, answer_type);
        cout << question << ": ";
        getline(cin, answer);
        outf << answer_type << ": " << answer << endl;
    }
    outf.close();
}

int main(){
    questions();
}
