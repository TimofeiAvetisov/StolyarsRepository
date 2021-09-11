#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream outf("results.txt");
    string name, second_name, film;
    cout << "Enter your name: ";
    cin >> name;
    cout << endl << "Enter your second name: ";
    cin >> second_name;
    cout << endl << "Enter your favourite film: ";
    getline(cin, film);
    getline(cin, film);
    outf << "Name: " << name << endl << "Second name: " << second_name << endl << "Favourite film: " << film << endl;

}
