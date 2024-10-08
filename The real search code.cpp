#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int angkaRand1(int rentang) {
    srand(time(0));
    return (rand() / 10 * 25) % rentang;
}

int angkaRand2(int rentang) {
    srand(time(0));
    return (rand() / 10 * 13) % rentang;
}

int main(){
    string user;
    long int NPM;
    int randSoal, mode, soal = 10;
    long double key, jawaban;
    int poin = 100;
    
    cout << "=== Welcome to brain teasers and accuracy games ===" << endl 
         << "Input Username: ";
     getline(cin, user);
    cout << "Input Your NPM: ";
    cin >> NPM;
do {
        cout << "Choose mode hard or easy (1: hard, 2: easy)" << endl;
        cout << "Select according to the option above: ";
        cin >> mode;
    } while(mode != 1 && mode != 2);
    do {
        cout << endl << " there are " << soal-- << " questions that must be answered " << endl;
        cout << "questions you must be answered ?" << endl;
        randSoal = angkaRand1(7);
        switch(mode) {
            case 1:
                if (randSoal >= 4) {
                    key = angkaRand1(1000) * angkaRand2(1000);
                    cout << angkaRand1(1000) << " * " << angkaRand2(1000) << endl;
