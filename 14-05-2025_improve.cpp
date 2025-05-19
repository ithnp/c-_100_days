/*
JUDUL :
else if and nested if

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/10JINVV_bpRMI66kGTVdVAgy5Bd2vuEUwIIXzcFX-884/edit?usp=sharing
*/

#include <iostream>
using namespace std;

int main(){
    bool is_keluar = false;
    char lanjut;
    int pilihan;
    double uts, uas, nilai_akhir;
    int kehadiran, suhu;
    char cuaca;

    while (!is_keluar)
    {
        cout << "==== PILIH SALAH SATU ====\n"
        << "Pilih Salah Satu : \n"
        << "1. Penialain Mahasiswa \n"
        << "2. Sistem Rekomendasi Pakaian\n"
        << "3. Keluar \n"
        << "Pilihan Anda : "; 

        cin >> pilihan;

        if (pilihan == 1){
            // === PENILAIAN MAHASISWA DENGAN VALIDASI ===
                cout << "\n ==== PENILAIAN MAHASISWA ==== \n";

                cout << "Masukkan Nilai UTS (0-100): ";
                cin >> uts;
                cout << "Masukkan Nilai UAS (0-100): ";
                cin >> uas;
                cout << "Masukkan Kehadiran (%): ";
                cin >> kehadiran;

                // Validasi nilai
                if (uts < 0 || uts > 100 || uas < 0 || uas > 100 || kehadiran < 0 || kehadiran > 100) {
                    cout << "--- Input tidak valid. Nilai harus antara 0 - 100 ---\n\n";
                } else {
                    nilai_akhir = (uts * 0.4) + (uas * 0.6);

                    if (nilai_akhir >= 70) {
                        if (kehadiran >= 75) {
                            cout << "--- Anda Lulus --- \n\n";
                        } else {
                            cout << "--- Anda tidak lulus karena kehadiran kurang dari 75% --- \n\n";
                        }
                    } else {
                        cout << "--- Anda tidak lulus karena nilai akhir kurang dari 70 --- \n\n";
                    }
                }
        }else if (pilihan == 2){
            cout << "==== SISTEM REKOMENDASI PAKAIAN ====\n"
            << "Apakah saat ini cerah ? y/n : ";

            cin >> cuaca;

            if(cuaca == 'y' || cuaca == 'Y'){
                cout << "Saat ini cuaca sedang cerah, Berapa suhu saat ini ? ";
                cin >> suhu;
                    if (suhu < 25 ){
                        cout << "Input suhu tidak valid. Suhu harus lebih dari 25 derajat celcius.\n";
                    }else{
                        cout << "Gunakan baju tipis dan topi\n";
                    }         
            }else if(cuaca == 'n' || cuaca == 'N'){
                cout << "Kalo begitu, cuaca saat ini mendung atau hujan, Berapa suhu saat ini ?";
                cin >> suhu;
                    if (suhu > 20){
                        cout << "Input suhu tidak valid. Suhu harus kurang dari 20 derajat celcius.\n";
                    }else{
                        cout << "Gunakan jaket dan bawa payung\n";
                    }
            }else{
                cout << "Pilihan anda tidak sesuai\n";
            }
        }else if(pilihan == 3){
            is_keluar = true;
            cout << "\n --- Terima kasih telah menggunakan program ini --- \n\n";        
        }else{
            cout << "\n ---------- Pilihan anda tidak valid ---------- \n\n";
        }

        if(!is_keluar){
            cout << "Apakah anda ingin melanjutkan ? (y/n) : ";
            cin >> lanjut;
            if (lanjut != 'y' && lanjut != 'Y'){
                is_keluar = true;
                cout << "\n --- Terima kasih telah menggunakan program ini --- \n\n";
            }
        }
        
        
        
    }
    
}