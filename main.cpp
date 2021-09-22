#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void questions(){
    ofstream outf("results.txt", ios :: app);
    ifstream inf("inputfile.txt");
    int c = 0;
    string question, answer_type, answer;
    vector<string> a;
    while(getline(inf, question)){
        getline(inf, answer_type);
        cout << question << ": ";
        getline(cin, answer);
        a.push_back(answer_type + ": " + answer + '\n');
        c++;
    }
    outf << c << endl;
    for (auto b : a) {
        outf << b;
    }
    outf.close();
}

void printFile() {
    fstream inf("results.txt");
    string answer;
    vector<string> results;
    int n;
    while (inf >> n) {
        string all_answers;
        getline(inf, answer);
        for (int i = 0; i < n; i++) {
            getline(inf, answer);
            all_answers += answer + '\n';
        }
        results.push_back(all_answers);
    }
    sort(results.begin(), results.end());
    for (auto q : results) {
        cout << q << endl;
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
