#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream outf("results.txt");
    string name, second_name, book;
    cout << "Enter your name: ";
    cin >> name;
    cout << endl << "Enter your second name: ";
    cin >> second_name;
    cout << endl << "Enter some book: ";
    getline(cin, book);
    getline(cin, book);
    outf << "Name: " << name << endl << "Second name: " << second_name << endl << "Some book: " << book << endl;

}
