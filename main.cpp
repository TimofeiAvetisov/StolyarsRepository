#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream outf("results.txt", ios :: app);
    string name, second_name, book;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your second name: ";
    cin >> second_name;
    cout << "Enter some book: ";
    getline(cin, book);
    getline(cin, book);
    outf << "Name: " << name << endl << "Second name: " << second_name << endl << "Some book: " << book << endl;
    outf.close();

}
