/*
Improve pembelajaran tanggal 08-05-2025
*/

//Coba kita improve pembelajaran dengan menggunakan input dari user dan akan menampikan data tersebut ke user

#include <iostream>
using namespace std;

main(){
    int umur;
    const int year = 365;
    const int avg_umur = year*65;

    cout << "Hi, saya akan menghitung sudah berapa lama anda hidup\n";
    
    while (true)
    {
        cout << "silahkan masukan umur anda : ";
        cin >> umur;
        if (cin.fail()){ // cin.fail() fungsinya untuk mendeteksi apakah user input sudah sesuai dengan tipe data int atau belum
            cin.clear(); // Jika tidak sesuai dengan tipe data akan di clear
            cin.ignore(10000, '\n'); // kemudian membuang karakter sisa yang telah diinput hingga 10.000 karakter, jika tidak ada ini maka akan di looping terus menerus
            cout << "Andjing lu ya !, masukin umur yang bener !\n"; // kemudian tampilkan alertnya
        }else{
            break;
        }
    }
    cout 
    << "Anda telah hidup selama " << (umur*year) << " hari" << endl
    << "Sisa hidup anda " << (avg_umur - umur*year) << " hari lagi\nBerusahalah menjadi orang yang berguna dari sisa hidupmu." ;
}

/*
OUTPUT YANG AKAN KELUAR KETIKA DI JALANKAN DENGAN KONDISI UMUR YANG BENAR
Hi, saya akan menghitung sudah berapa lama anda hidup
silahkan masukan umur anda : 25
Anda telah hidup selama 9125 hari
Sisa hidup anda 14600 hari lagi
Berusahalah menjadi orang yang berguna dari sisa hidupmu.

=============================================================================

OUTPUT YANG AKAN KELUAR KETIKA DI JALANKAN DENGAN KONDISI SALAH
Hi, saya akan menghitung sudah berapa lama anda hidup
silahkan masukan umur anda : UMUR
Andjing lu ya !, masukin umur yang bener !
silahkan masukan umur anda : INI UMUR
Andjing lu ya !, masukin umur yang bener !
silahkan masukan umur anda : 25
Anda telah hidup selama 9125 hari
Sisa hidup anda 14600 hari lagi
Berusahalah menjadi orang yang berguna dari sisa hidupmu.
*/