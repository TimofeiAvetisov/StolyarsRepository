#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

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

void printFile(int number) {
    fstream inf("results.txt");
    string answer, key_answer;
    map<string, string> results;
    int n;
    while (inf >> n) {
        string all_answers;
        getline(inf, answer);
        for (int i = 0; i < n; i++) {
            getline(inf, answer);
            if (i == number - 1) {
                key_answer = answer;
            }
            all_answers += answer + '\n';
        }
        results[key_answer] = all_answers;
    }
    for (auto q : results) {
        cout << q.second << endl;
    }
    cout << "number of respondents: " << results.size() << endl;

}


int main(){
    cout << "Do you want to conduct a survey or get results? Enter survey or results: ";
    string answer;
    getline(cin, answer);
    if (answer == "survey") {
        questions();
    } else {
        int n;
        cout << "Enter number of sort key : ";
        cin >> n;
        printFile(n);
    }
}
