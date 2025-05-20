/*
JUDUL :
Switch Statement

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1TQ_RsM2NL9T70OqGVFyTDSAa0bZts9pY0WmiLLhwppw/edit?usp=sharing
*/

#include <iostream>
using namespace std;

main(){
    int a, b,pilihan;
    char kalkulator;
    bool is_keluar = false;

    while (!is_keluar)
    {
        cout << "=======================\n"
        << "PILIH MENU DIBAWAH INI\n"
        << "=======================\n"
        << "1. Menu Makanan\n2. Kalkulator\n3. Menu Multi Level\n4. Keluar\n"
        << "PILIH (1 - 4) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1: 
                cout << "=======================\n"
                << "MENU MAKANAN FAVORIT\n"
                << "=======================\n"
                << "1. Nasi Goreng\n"
                << "2. Mie Ayam\n"
                << "3. Sate Ayam\n"
                << "4. Ayam Geprek\n"
                << "5. Bakso\n"
                << "Pilih nomor menu ( 1 - 5 ) : ";
                cin >> pilihan;

                switch(pilihan){
                    case 1: 
                        cout << "Pilihan anda : Nasi Goreng\n";
                        break;
                    case 2:
                        cout << "Pilihan anda : Mie Ayam\n";
                        break;
                    case 3:
                        cout << "Pilihan anda : Sate Ayam\n";
                        break;
                    case 4: 
                        cout << "Pilihan anda : Ayam Geprek\n";
                        break;
                    case 5:
                        cout << "Pilihan anda : Bakso\n";
                        break;
                    default:
                        cout << "Pilihan Tidak Tersedia\n";
                }
                break;
            case 2:
                cout << "=======================\n"
                << "KALKULATOR SEDERHANA\n"
                << "=======================\n"
                << "Masukan Angka Pertama : ";
                cin >> a;
                cout << "Masukan Angka Kedua : ";
                cin >> b;
                cout << "Pilih Operasi ( +, -, *, / ) : ";
                cin >> kalkulator;

                switch(kalkulator){
                    case '+':
                        cout << a << " + " << b << " = " << a + b << endl;
                        break;
                    case '-':
                        cout << a << " - " << b  << " = " << a - b << endl;
                        break;
                    case '*':
                        cout << a << " * " << b  << " = " << a * b << endl;
                        break;
                    case '/':
                        if ( b != 0){
                            cout << a << " / " << b  << " = " << a / b << endl;
                        }else{
                            cout << "Error : Angka kedua tidak boleh 0\n";
                            break;
                        }
                    default:
                        cout << "Pilihan tidak tersedia\n";
                }
                break;
            case 3:
                cout << "=== PILIH KATEGORI MENU ===\n"
                << "1. Makanan\n2. Minuman\n"
                << "Pilih ( 1 - 2 ) : ";
                cin >> pilihan;

                switch(pilihan){
                    case 1: 
                        cout << "=== PILIH MENU MAKANAN ===\n"
                        << "1. Ayam Geprek\n2. Bakso\n3. Mie Ayam\n4. Ayam Panggang\n"
                        << "Pilih (1 - 4) : ";
                        cin >> pilihan;

                        switch(pilihan){
                            case 1: 
                                cout << "Pilihan anda : Ayam Geprek\n";
                                break;
                            case 2:
                                cout << "Pilihan anda : Bakso\n";
                                break;
                            case 3:
                                cout << "Pilihan anda : Mie Ayam\n";
                                break;
                            case 4:
                                cout << "Pilihan anda : Ayam Panggang\n";
                                break;
                            default:
                                cout << "Pilihan anda tidak sesuai\n";
                        }
                    case 2:
                        cout << "=== PILIH MENU MINUMAN ===\n"
                        << "1. Es Teh\n2. Jus Buah\n3. Kopi\n"
                        << "Pilih ( 1 - 3 ) : ";

                        cin >> pilihan;

                        switch(pilihan){
                            case 1:
                                cout << "Pilihan Anda : Es Teh\n";
                                break;
                            case 2:
                                cout << "Pilihan Anda : Jus Buah\n";
                                break;
                            case 3:
                                cout << "Pilihan Anda : Kopi \n";
                                break;
                            default:{
                                cout << "Error : Pilihan tidak tersedia\n";
                            }
                        }
                }
                break;
            case 4:{
                is_keluar = true;
                cout << "Terima kasih telah menggunakan program ini\n";
                }
                break;
            default:{
                cout << "Pilihan tidak ada\n";       
                }
                break;   
        }   

    }
    

}