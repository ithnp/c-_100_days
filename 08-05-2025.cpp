/*
JUDUL :
Explore data types: int, float, char, bool

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/1j364t-9PpcCiPhPywVL6cpZLN93L0QsbRA5eHlbBkYw/edit?usp=sharing
*/

#include <iostream>
#include <string>
using namespace std;

main(){
    string nama = "HeisenBerg"; //tipe data string
    int umur = 20; //tipe data integer
    float tinggi = 170.5; //tipe data float
    char initial = 'H'; //tipe data char
    bool isLakiLaki = true; //tipe data bool

    cout << "Nama : " << nama << "\nInsial : " << initial <<"\nTinggi : " << tinggi << " cm\nUmur : " << umur << " Tahun\nJenis Kelamin : " << (isLakiLaki ? "Laki - Laki" : "Perempuan");
    //fungsi \n untuk membuat baris baru
}


/*
Output yang akan keluar seperti ini :
Nama : HeisenBerg
Insial : B
Tinggi : 170.5 cm
Umur : 20 Tahun
Jenis Kelamin : Laki - Laki
*/