/*
JUDUL :
Practice with Basic Operators

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1a3hYDOACODIMMtXeCg-w2KhRHRlv4XIE6HznQobdb9o/edit?usp=sharing
*/

#include <iostream>
using namespace std;

main(){
 int pilihan,a,b,usia;
 bool iskeluar = false;

    while(!iskeluar){
        cout << "======================\n PILIH SALAH SATU : \n"
             << "1. OPERASI ARITMATIK \n2. OPERASI RELASIONAL \n3. KONDISI LOGIKA \n4. KELUAR"
             << "\n======================\nJAWABAN ANDA : ";
        cin >> pilihan;

        switch(pilihan){
                case 1 :{
                    cout << "\n=====================================\nBERIKUT ADALAH OPERASI ARITMATIKA\n=====================================\n";
                    cout << "Masukan 2 angka :\n";
                    cin >> a >> b;

                    cout << "Angka pertama = " << a << " & Angka kedua = " << b << endl;
                    cout << "Penambahan : " << a + b << endl;
                    cout << "Pengurangan : " << a - b << endl;
                    cout << "Perkalian : " << a * b << endl;

                    if (b != 0) {
                        cout << "Pembagian : " << a / b << endl;
                        cout << "Modulus : " << a % b << endl;
                    } else {
                            cout << "Pembagian dan modul tidak dapat dilakukan karna angka kedua adalah 0";
                    }
                    cout << "=====================================\n";

                    cout << "Kembali Ke Menu [1], Keluar Program [2]\nPILIH SALAH SATU: ";
                    cin >> pilihan;

                        if (pilihan == 2)
                        {
                            cout << "Terima kasih telah menggunakan program ini";
                            iskeluar = true;
                        }else{
                            break;
                        }
                    break;
                }
                case 2 :{
                    cout << "INI PILIHAN 2\n";

                    cout << "\n=====================================\nBERIKUT ADALAH OPERASI RELASIONAL\n=====================================\n";
                    cout << "Masukkan dua angka: \n";
                    cin >> a >> b;

                if (a == b) {
                    cout << "Angka sama." << endl;
                } else {
                    cout << "Angka tidak sama." << endl;
                    if (a > b) {
                        cout << a << " lebih besar dari " << b << endl;
                    } else {
                        cout << b << " lebih besar dari " << a << endl;
                    }
                }
                
                cout << "=====================================\n";

                    cout << "Kembali Ke Menu [1], Keluar Program [2]\nPILIH SALAH SATU: ";
                    cin >> pilihan;
                
                    if (pilihan == 2)
                        {
                            cout << "Terima kasih telah menggunakan program ini";
                            iskeluar = true;
                        }else{
                            break;
                        }
                    break;
                }
                case 3 :{
                    cout << "INI PILIHAN 3\n";
                    
                    cout << "\n=====================================\nBERIKUT ADALAH KONDISI LOGIKA\n=====================================\n";

                    cout << "Masukkan usia: ";
                    cin >> usia;

                    cout << "Apakah Anda pelajar? (1 = ya, 0 = tidak): ";
                    cin >> pilihan;

                    if (usia < 18 && pilihan) {
                        cout << "Anda adalah pelajar remaja." << endl;
                    } else if (usia >= 18 && pilihan) {
                        cout << "Anda adalah pelajar dewasa." << endl;
                    } else if (!pilihan) {
                        cout << "Anda bukan pelajar." << endl;
                    }

                    cout << "\nKembali Ke Menu [1], Keluar Program [2]\nPILIH SALAH SATU: ";
                    cin >> pilihan;

                    if (pilihan == 2)
                        {
                            cout << "Terima kasih telah menggunakan program ini";
                            iskeluar = true;
                        }else{
                            break;
                        }
                    break;
                    
                }case 4 :{
                    cout << "Terima kasih telah menggunakan program ini, sampai jumpa !\n";
                    iskeluar = true;
                    break;
                }default:{
                    cout << "Pilihan tidak valid goblok!\n";
                    if (cin.fail()){ 
                        cin.clear(); 
                        cin.ignore(10000, '\n'); 
                        cout << "masukin jawaban yang bener !\n"; 
                    }else{
                        break;
                }
            }
        }
    }
}