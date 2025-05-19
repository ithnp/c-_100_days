/*
JUDUL :
if and else statements

Link pembelajaran dan penjelasan
https://docs.google.com/document/d/10JINVV_bpRMI66kGTVdVAgy5Bd2vuEUwIIXzcFX-884/edit?usp=sharing
*/

#include <iostream>
using namespace std;

int main() {
    int celsius, usia, nilai, pilihan;
    bool is_keluar = false;
    char lanjut;

    while (!is_keluar) {
        cout << "\n==============================\n";
        cout << "Pilih salah satu:\n";
        cout << "1. Pengecekan Suhu\n";
        cout << "2. Pengecekan Usia\n";
        cout << "3. Pengecekan Nilai Ujian\n";
        cout << "4. Keluar Program\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        cout << "------------------------------\n";

        if (pilihan == 1) {
            cout << "======= CEK KATEGORI SUHU ======\n";
            cout << "Masukkan nilai suhu (Celsius): ";
            cin >> celsius;

            if (celsius >= 30) {
                cout << "Kategori: Suhu Panas\n";
            } else if (celsius >= 20 && celsius <= 29) {
                cout << "Kategori: Suhu Hangat\n";
            } else {
                cout << "Kategori: Suhu Dingin\n";
            }

        } else if (pilihan == 2) {
            cout << "Masukkan usia Anda: ";
            cin >> usia;

            if (usia >= 60) {
                cout << "Kategori: Lansia\n";
            } else if (usia >= 18 && usia <= 59) {
                cout << "Kategori: Dewasa\n";
            } else if (usia >= 12 && usia <= 17) {
                cout << "Kategori: Remaja\n";
            } else {
                cout << "Kategori: Anak-anak\n";
            }

        } else if (pilihan == 3) {
            cout << "===== PENGECEKAN NILAI =====\n";
            cout << "Masukkan nilai (0 - 100): ";
            cin >> nilai;

            if (nilai >= 0 && nilai <= 100) {
                cout << "Nilai Valid\n";

                if (nilai >= 90) {
                    cout << "Kategori Nilai: A\n";
                } else if (nilai >= 80) {
                    cout << "Kategori Nilai: B\n";
                } else if (nilai >= 70) {
                    cout << "Kategori Nilai: C\n";
                } else {
                    cout << "Kategori Nilai: D\n";
                }
            } else {
                cout << "Nilai tidak valid. Harus antara 0 hingga 100.\n";
            }

        } else if (pilihan == 4) {
            is_keluar = true;
            cout << "Terima kasih. Program selesai.\n";
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

        // Konfirmasi untuk melanjutkan (opsional)
        if (!is_keluar) {
            cout << "\nKembali ke menu utama? (y/n): ";
            cin >> lanjut;
            if (lanjut != 'y' && lanjut != 'Y') {
                is_keluar = true;
                cout << "Terima kasih. Program selesai.\n";
            }
        }
    }

    return 0;
}
