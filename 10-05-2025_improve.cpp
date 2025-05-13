/*
JUDUL :
Practice with Basic Operators

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1a3hYDOACODIMMtXeCg-w2KhRHRlv4XIE6HznQobdb9o/edit?usp=sharing
*/

#include <iostream>
using namespace std;

main(){
 int pilihan;
 bool iskeluar = false;

    while(!iskeluar){
        cout << "======================\n PILIH SALAH SATU : " << endl
            << "1. OPERASI ARITMATIK \n2. OPERASI RELASIONAL \n3. KONDISI LOGIKA \n4. KELUAR"
            << "\n======================\nJAWABAN ANDA : ";
        cin >> pilihan;

        switch(pilihan){
                case 1 :{
                    cout << "INI PILIHAN 1\n";
                    break;
                }
                case 2 :{
                    cout << "INI PILIHAN 2\n";
                    break;
                }
                case 3 :{
                    cout << "INI PILIHAN 3\n";
                    break;
                }case 4 :{
                    cout << "Terima kasih telah menggunakan program ini, sampai jumpa !\n";
                    iskeluar = true;
                    break;
                }default:{
                    cout << "Pilihan tidak valid goblok!\n";
                }
            }
        }
    }