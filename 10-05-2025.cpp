/*
JUDUL :
Practice with Basic Operators

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1a3hYDOACODIMMtXeCg-w2KhRHRlv4XIE6HznQobdb9o/edit?usp=sharing
*/

#include <iostream>
using namespace std;

main(){
    int a,b;

    cout << "\n=====================================\nBERIKUT ADALAH OPERASI ARITMATIKA\n=====================================\n";
    cout << "Masukan 2 angka : \n";
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

    
    int x, y;

    cout << "\n=====================================\nBERIKUT ADALAH OPERASI RELASIONAL\n=====================================\n";
    cout << "Masukkan dua angka: ";
    cin >> x >> y;

    if (x == y) {
        cout << "Angka sama." << endl;
    } else {
        cout << "Angka tidak sama." << endl;
        if (x > y) {
            cout << x << " lebih besar dari " << y << endl;
        } else {
            cout << y << " lebih besar dari " << x << endl;
        }
    }
    
    cout << "=====================================\n";



    int usia;
    bool pelajar;
    cout << "\n=====================================\nBERIKUT ADALAH KONDISI LOGIKA\n=====================================\n";

    cout << "Masukkan usia: ";
    cin >> usia;

    cout << "Apakah Anda pelajar? (1 = ya, 0 = tidak): ";
    cin >> pelajar;

    if (usia < 18 && pelajar) {
        cout << "Anda adalah pelajar remaja." << endl;
    } else if (usia >= 18 && pelajar) {
        cout << "Anda adalah pelajar dewasa." << endl;
    } else if (!pelajar) {
        cout << "Anda bukan pelajar." << endl;
    }
}