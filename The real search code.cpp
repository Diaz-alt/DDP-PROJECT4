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
