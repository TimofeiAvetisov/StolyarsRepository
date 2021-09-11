#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream outf("results.txt");
    string name, second_name, book, party;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your second name: ";
    cin >> second_name;
    cout << "Enter some book: ";
    getline(cin, book);
    getline(cin, book);
    cout << "Enter which party you plan to vote for in: ";
    getline(cin, party)
    outf << "Name: " << name << endl << "Second name: " << second_name << endl << "Some book: " << book << endl << "The voter plans to vote for: " << party << endl;

}
