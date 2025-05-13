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

    
}