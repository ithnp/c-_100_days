/*
JUDUL :
While Loops

Link pembelajaran dan penjelasan:
https://docs.google.com/document/d/1xE7Dn3hGhm7LacxZ62dhBFb9Qdxt6V5JvoQfPztREok/edit?usp=sharing
*/

#include <iostream>
using namespace std;

int main() {
    bool is_keluar = false;
    int menu_utama;
    char jawaban;

    while (!is_keluar) {
        cout << "\n=====================\nPILIH SALAH SATU\n=====================\n"
             << "1. Perhitungan Mundur\n"
             << "2. Total Penjumlahan\n"
             << "3. Login (Validasi PIN)\n"
             << "4. Keluar\n"
             << "Pilih (1 - 4): ";
        cin >> menu_utama;

        if (menu_utama == 1) {
            // Tugas A: Hitung Mundur
            int n;
            cout << "Masukkan angka untuk hitung mundur: ";
            cin >> n;

            while (n >= 1) {
                cout << n << " ";
                n--;
            }
            cout << endl;

        } else if (menu_utama == 2) {
            // Tugas B: Total Penjumlahan
            int angka, total = 0;
            cout << "Masukkan angka (0 untuk selesai): ";
            cin >> angka;

            while (angka != 0) {
                total += angka;
                cout << "Masukkan angka berikutnya (0 untuk selesai): ";
                cin >> angka;
            }

            cout << "Total: " << total << endl;

        } else if (menu_utama == 3) {
            // Tugas C: Login (3 kali percobaan)
            const int PIN = 123; // Anda bisa ganti dengan PIN lain
            int pass, attempt = 0;

            while (attempt < 3) {
                cout << "Masukkan PIN: ";
                cin >> pass;

                if (pass == PIN) {
                    cout << "Akses diterima.\n";
                    break;
                } else {
                    cout << "PIN salah. Coba lagi.\n";
                    attempt++;
                    if (attempt == 2) {
                        cout << "Anda sudah 2 kali salah. Kesempatan terakhir!\n";
                    }
                }
            }

            if (attempt == 3) {
                cout << "Kartu Anda terblokir.\n";
            }

        } else if (menu_utama == 4) {
            // Keluar dari program
            cout << "Terima kasih telah menggunakan program ini.\n";
            is_keluar = true;

        } else {
            cout << "Error: Pilihan tidak tersedia.\n";
            cout << "Apakah Anda ingin melanjutkan? (y/n): ";
            cin >> jawaban;
            if (jawaban != 'y' && jawaban != 'Y') {
                is_keluar = true;
            }
        }
    }

    return 0;
}
