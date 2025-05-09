/*
JUDUL :
Learn about variables and constants

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1mn4yIoDw4FiKKUd5SUorU7Q8UT4UbFv_Wgng4-NquWU/edit?usp=sharing
*/

#include <iostream>
using namespace std;

int main() {
    string nama = "Andi"; //ini adalah varibel nama dengan tipe data string
    int umur = 25; // ini adalah variable umur dengan tipe data int
    const int max_umur = 100; //ini adalah konstanta max_umur dengan tipe data int

    cout << "Nama : " << nama << endl; //menampilkan nama
    cout << "Umur : " << umur << endl; //menampilkan umur
    cout << "Sisa tahun sampai umur " << max_umur << " ialah : " << (max_umur - umur);//menampilkan sisa umur

}

/*
output yang akan dihasilkan

Nama : Andi
Umur : 25
Sisa tahun sampai umur 100 ialah : 75

*/