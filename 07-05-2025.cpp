/*
JUDUL :
Understand C++ syntax, comments, and semicolons

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1DgiHGDaijuCNLyjnpndC7J5hWM_6XWPW9Tn0-P8-pik/edit?usp=sharing
*/

// LATIHAN PRAKTIK
// TAMPILKAN NAMA DAN UMUR
#include <iostream> //standar input output libary c++
using namespace std; //agar tidak perlu memanggil std::

int main(){
    //Menyimpan variabel dengan tipe data string
    string frist_name = "Heisen";
    string last_name = "Berg";

    //Menampilkan variabel
    cout << "Nama depan saya adalah " << frist_name << " Nama belakang saya adalah " << last_name << endl //cout berfungsi untuk menampilkan
    << " Nama lengkap saya adalah " << frist_name << " " << last_name;
}

/*
Output yang akan keluar ialah :
Nama depan saya adalah Heisen Nama belakang saya adalah Berg
Nama lengkap saya adalah Heisen Berg

*/


