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

void printFile() {
    fstream inf("results.txt");
    string name, second_name, book;
    int i = 0;
    while (getline(inf, name)) {
        ++i;
        getline(inf, second_name);
        getline(inf, book);
        cout << "Result number " << i << ": " << endl << name << endl << second_name << endl << book << endl;
    }

}


int main(){
    cout << "Do you want to conduct a survey or get results? Enter survey or results: ";
    string answer;
    getline(cin, answer);
    if (answer == "survey") {
        questions();
    } else {
        printFile();
    }
}
