#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int main() {
    string nama;
    string mode, pilihanLanjut;
    int tebak, jawabanBenar, angka1, angka2;
    int kesempatan = 3; 

    cout << "Masukkan Nama Pengguna : ";
    getline(cin, nama);

    srand(time(0));

    do {
        cout << "Pilih Mode (Easy atau Hard): " << endl;
        cin >> mode;

        if (mode == "Easy"||mode == "easy") {
            int operasi = rand() % 2; 

            if (operasi == 0) {
                angka1 = rand() % 50 + 1;
                angka2 = rand() % 50 + 1;
                jawabanBenar = angka1 + angka2;
                cout << "Berapa hasil dari " << angka1 << " + " << angka2 << "?" << endl;
            } else {

                angka1 = rand() % 50 + 1;
                angka2 = rand() % 50 + 1;
                if (angka1 < angka2) swap(angka1, angka2); 
                jawabanBenar = angka1 - angka2;
                cout << "Berapa hasil dari " << angka1 << " - " << angka2 << "?" << endl;
            }
            break; 

        } else if (mode == "Hard"||mode == "hard") {
            int operasi = rand() % 2;

            if (operasi == 0) {
           n
                angka1 = rand() % 20 + 1;
                angka2 = rand() % 20 + 1;
                jawabanBenar = angka1 * angka2;
                cout << "Berapa hasil dari " << angka1 << " * " << angka2 << "?" << endl;
            } else {
 
                angka1 = (rand() % 20 + 1) * (rand() % 10 + 1);
                angka2 = rand() % 10 + 1;
                jawabanBenar = angka1 / angka2;
                cout << "Berapa hasil dari " << angka1 << " / " << angka2 << "?" << endl;
            }
            break;
        } else {
            cout << "Mode tidak valid! Silakan pilih lagi." << endl;
        }
    } while (true);

    do {
        cout << "Masukkan jawabanmu: ";
        cin >> tebak;

        if (tebak != jawabanBenar) {
            cout << "Jawaban salah!" << endl;
            kesempatan--;
        } else {
            cout << "Selamat " << nama << ", jawabanmu benar!" << endl;
            break;
        }

        if (kesempatan == 0) {
            cout << "Kamu telah salah menjawab 3 kali!" << endl;
            cout << "Apakah kamu ingin lanjut? (Ya/tidak): ";
            cin >> pilihanLanjut;

            if (pilihanLanjut == "ya"||pilihanLanjut == "Ya"||pilihanLanjut "y"||pilihanLanjut "Y") {
                kesempatan = 3;
                cout << "Kesempatan telah direset. Lanjutkan permainan!" << endl;
                mode = "";
                continue;
            } else {
                cout << "Terima kasih sudah bermain, " << nama << "!" << endl;
                break;
            }
        }

    } while (tebak != jawabanBenar);

    return 0;
}
