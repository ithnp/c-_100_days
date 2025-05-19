/*
JUDUL :
Weekly Challange

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1x4eO0iIMLFKgZCSC7FhOJMljAGMBtYIsj0lLu7z9ANk/edit?usp=sharing
*/

#include <iostream>
using namespace std;

int main(){
    float panjang, lebar, jarijari, luas;
    int pilihan;
    const float pi = 3.14;
    bool is_keluar = false; 

    while(!is_keluar){
        cout << "=============================\nPILIH JENIS PERHITUNGAN DIBAWAH INI\n"
        <<"1. Menghitung Persegi Panjang\n"
        <<"2. Menghutung Lingkaran\n"
        <<"3. Keluar Program\n"
        <<"Pilih 1, 2 atau 3\n"
        <<"Pilihan anda : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
                cout << "Masukan Panjang : ";
                cin >> panjang;

                cout << "Masukan lebar : ";
                cin >> lebar;

                luas = panjang * lebar;

                cout << "Panjang = " << panjang << " Lebar : " << lebar << endl;
                cout << "Hasil = " << luas << endl;            
            break;
        
        case 2: 
                cout << "Masukan jari-jari lingkaran : ";
                cin >> jarijari;

                luas = pi * jarijari * jarijari;
                cout << "Hasil = " << luas << endl;

            break;

        case 3:
                is_keluar = true;
            break;

        default:
            if (cin.fail()){
                cin.clear();
                cin.ignore(10000, '\n'); 
        
        cout << "Pilihan anda tidak valid\n";
                break;
            }else{
                cout << "Pilihan anda tidak valid\n";
                break;  
            }
        }
    }
}