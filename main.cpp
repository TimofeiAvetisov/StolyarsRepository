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
    cout << "Do you wont to see all results?" << endl;
    string answer;
    cin >> answer;
    if (answer == "YES" || answer == "Y" || answer == "yes" || answer == "y" || answer == "Да" || answer == "да") {
        printFile();
    }
}
