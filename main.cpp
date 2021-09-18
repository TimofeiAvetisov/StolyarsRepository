#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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
    ofstream outf("results.txt", ios :: app);
    cout << "Do you want to conduct a survey or get results? Enter survey or results: ";
    string answer;
    getline(cin, answer);
    if (answer == "survey") {
        string name, second_name, book;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your second name: ";
        cin >> second_name;
        cout << "Enter some book: ";
        getline(cin, book);
        getline(cin, book);
        outf << "Name: " << name << endl << "Second name: " << second_name << endl << "Some book: " << book << endl;
    } else {
        printFile();
    }
    outf.close();
}
