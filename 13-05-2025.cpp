/*
JUDUL :
if and else statements

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/10JINVV_bpRMI66kGTVdVAgy5Bd2vuEUwIIXzcFX-884/edit?usp=sharing
*/

#include <iostream>
using namespace std;

main(){
    int celsius, usia, nilai, pilihan;
    bool is_keluar = false;

    while (!is_keluar)
    {
        cout << "Pilih salah satu : \n"
        << "1. Pengecekan Suhu \n"
        << "2. Pengecekan Usia \n"
        << "3. Pengecekan Nilai Ujian\n"
        << "4. Keluar Program\n"
        << "Pilihan anda : ";
        cin >> pilihan;

        if(pilihan == 1 ){
            cout << "======= CEK KATEGORI SUHU ====== \n"
            << "Masukan nilai suhu : ";

            cin >> celsius;

            if(celsius >= 30){
                cout << "Suhu Panas"; 
            }else if (celsius >= 20 && celsius <= 29)
            {
                cout << "Suhu Hangat";
            }else{
                cout << "Suhu Dingin";
            } 

        }else if(pilihan == 2){
            cout << "Masukan usia anda : ";
            cin >> usia;

            if (usia >= 60)
            {
                cout << "Usia Anda " << usia << " anda termasuk lansia\n";
            }else if (usia > 18 || usia == 59)
            {
                cout << "Usia Anda " << usia << " anda termasuk dewasa\n";
            }else if (usia > 12 || usia == 17)
            {
                cout << "Usia Anda " << usia << " anda termasuk remaja\n";
            }else
            {
                cout << "Anda termasuk anak-anak\n";
            }
            
        }else if(pilihan == 3){
            cout << "===== PENGECEKAN NILAI =====\n";
            cout << "Masukan nilai 0 - 100 : ";
            cin >> nilai;

            if (nilai >= 0 && nilai <= 100)
            {
                cout << "Nilai Valid\n";
            }else{
                cout << "Nilai tidak valid\n";
            }
            
        }else if(pilihan == 4){
            is_keluar = true;
        }else{
            cout << "Pilihan anda tidak valid\n";
            break;
        }

    }
    
}