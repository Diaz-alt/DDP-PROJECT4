#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string nama;
    string mode;
    int kesempatan=3;
    int soalBenar=0;
    int check;
    int arr1[1000], arr2[9000];
    int a1, a2, hasil, jawaban, operasi;
    for(int i=0;i<1000;i++){
        arr1[i]=i+1;
    }
    for(int i=0;i<9000;i++){
        arr2[i]=i+1001;
    }
    
    cout << "Masukkan Nama Pengguna: " ;
    getline(cin, nama);
    
    do{
        cout << "Pilih Mode (Easy / Hard): ";
        cin >> mode;

        srand(time(0));
        if(mode=="easy"||mode=="Easy") {
            check = 0;
        } else if(mode=="hard"||mode=="Hard"){
            check=0; 
        } else {
            cout << "Mode tidak tepat" << endl << endl;
            check=1; 
        }
    } while(check==1);
    
    cout << "Carilah jawaban dari soal berikut:" << endl;
    
    do{
        if (mode=="easy"||mode=="Easy") {
            a1=arr1[rand()%1000];
            a2=arr1[rand()%1000];
        } else if (mode=="hard"||mode=="Hard") {
            a1=arr2[rand()%9000];
            a2=arr2[rand()%9000];
        }
        
        operasi=rand()%2;
        if(operasi==0) {
            hasil=a1*a2;
            cout << a1 << " x " << a2 << " ?" << endl;
        } else {

            while(a1%a2!=0){
                if(mode == "easy"||mode=="Easy"){
                    a1 = arr1[rand()%1000];
                    a2 = arr1[rand()%1000];
                } else {
                    a1 = arr2[rand()%9000];
                    a2 = arr2[rand()%9000];
                }
            }
            hasil = a1 / a2;
            cout << a1 << " / " << a2 << " ?" << endl;
        }
        cin >> jawaban;

        if (jawaban == hasil) {
            soalBenar++;
            cout << "Jawaban benar" << endl << endl;
        } else {
            cout << "Jawaban salah" << endl << endl;
            kesempatan--;
        }

    } while (kesempatan!=0);
    
    cout << "Nama Pemain: " << nama << endl;
    cout << "Total soal yang benar: " << soalBenar << endl;

    return 0;
}
