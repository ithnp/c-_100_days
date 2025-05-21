/*
JUDUL :
While Loops

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1xE7Dn3hGhm7LacxZ62dhBFb9Qdxt6V5JvoQfPztREok/edit?usp=sharing
*/

#include <iostream>
using namespace std;

main(){
    bool is_keluar = false;
    int n, menu_utama,angka;
    int total = 0;
    int attempt = 0;
    int pass;
    char jawaban;

    while(!is_keluar){
        cout << "=====================\nPILIH SALAH SATU\n=====================\n"
        << "1. Perhitungan mundur \n"
        << "2. Total Penjumlahan \n"
        << "3. Login \n"
        << "4. Keluar \n"
        << "Pilih (1 - 4): ";
        cin >> menu_utama;

        if(menu_utama == 1){
            cout << "Masukan Angka : ";
            cin >> n;    

            while(n >= 1){
                cout << n << " \n";
                    n--;
            }
            
        }else if(menu_utama == 2){
            cout << "Masukan angka :";
            cin >> angka;
            while(angka !=0 ){
                total +=angka;
                cout << "Input Angka Berikutnya (0 untuk selesai):";
                cin >> angka;
            }
            cout << "Total : "<< total <<endl;
            break;

        }else if(menu_utama == 3){
            while(attempt < 3){
                cout << "Masukan password : ";
                cin >> pass;

                if(pass == 123){
                    cout << "Login berhasil\n";
                    break;
                }else{
                    cout << "Password salah, coba lagi \n";
                }
                if(attempt == 1){
                cout << "anda sudah 2 kali salah, pecobaan 1 kali lagi\n";
            }
                attempt++;
            }
            if(attempt == 3){
                cout << "Akses ditolak\n";
            }
        }else if(menu_utama == 4){
            cout << "Terima kasih telah menggunakan program ini";
            is_keluar = true;        
        }else{
            cout << "Error : Pilihan tidak tersedia\n"
            << "Apakah anda ingin melanjutkan ? (y/n) ";
            cin >> jawaban;

            if(jawaban == 'y' || jawaban == 'Y'){
                is_keluar = false;
            }else{
                is_keluar = true;
            }

        }
    }







   

}