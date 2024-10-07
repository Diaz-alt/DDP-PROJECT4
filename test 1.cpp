#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string nama;
    string mode;
    int check;
    int arr1[1000], arr2[9000];
    int a1, a2, hasil, jawaban, operasi;
    for(int i=0;i<1000;i++){
        arr1[i]=i+1;
    } 
    for(int i=0;i<9000;i++){
        arr2[i]=i+1001;

    }
    cout << "Masukkan Nama Pengguna : " ;
    getline (cin,nama);

    do{
    cout << "Pilih Mode (Easy / Hard)" << endl;
    cin >> mode;

    srand(time(0));
        if(mode=="easy"||mode=="Easy"){
        a1=arr1[rand()%1000];
        a2=arr1[rand()%1000];
        check=0;
    } else if(mode=="hard"||mode=="Hard"){
        a1=arr2[rand()%9000];
        a2=arr2[rand()%9000];
        check=0;
    } else {
        cout << "Mode tidak tepat" << endl << endl;
        check=1;
            }
    } while(check==1);
}
