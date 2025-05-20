/*
JUDUL :
Switch Statement

Link pembelajaran dan penjelasan:
https://docs.google.com/document/d/1TQ_RsM2NL9T70OqGVFyTDSAa0bZts9pY0WmiLLhwppw/edit?usp=sharing
*/

#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;
    int menu_utama, menu_makanan, menu_minuman;
    char operasi;
    bool is_keluar = false;

    while (!is_keluar) {
        cout << "\n=========================\n";
        cout << "      MENU UTAMA         \n";
        cout << "=========================\n";
        cout << "1. Menu Makanan\n";
        cout << "2. Kalkulator\n";
        cout << "3. Menu Multi Level\n";
        cout << "4. Keluar\n";
        cout << "Pilih (1 - 4): ";
        cin >> menu_utama;

        switch (menu_utama) {
            case 1:
                cout << "\n=== MENU MAKANAN FAVORIT ===\n";
                cout << "1. Nasi Goreng\n";
                cout << "2. Mie Ayam\n";
                cout << "3. Sate Ayam\n";
                cout << "4. Ayam Geprek\n";
                cout << "5. Bakso\n";
                cout << "Pilih nomor menu (1 - 5): ";
                cin >> menu_makanan;

                switch (menu_makanan) {
                    case 1: cout << "Pilihan Anda: Nasi Goreng\n"; break;
                    case 2: cout << "Pilihan Anda: Mie Ayam\n"; break;
                    case 3: cout << "Pilihan Anda: Sate Ayam\n"; break;
                    case 4: cout << "Pilihan Anda: Ayam Geprek\n"; break;
                    case 5: cout << "Pilihan Anda: Bakso\n"; break;
                    default: cout << "Pilihan tidak tersedia.\n"; break;
                }
                break;

            case 2:
                cout << "\n=== KALKULATOR SEDERHANA ===\n";
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                cout << "Pilih operasi (+, -, *, /): ";
                cin >> operasi;

                switch (operasi) {
                    case '+':
                        cout << "Hasil: " << angka1 + angka2 << endl; break;
                    case '-':
                        cout << "Hasil: " << angka1 - angka2 << endl; break;
                    case '*':
                        cout << "Hasil: " << angka1 * angka2 << endl; break;
                    case '/':
                        if (angka2 != 0)
                            cout << "Hasil: " << angka1 / angka2 << endl;
                        else
                            cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
                        break;
                    default:
                        cout << "Operasi tidak dikenal.\n"; break;
                }
                break;

            case 3:
                cout << "\n=== MENU MULTI LEVEL ===\n";
                cout << "1. Makanan\n";
                cout << "2. Minuman\n";
                cout << "Pilih kategori (1 - 2): ";
                cin >> menu_makanan;

                switch (menu_makanan) {
                    case 1:
                        cout << "\n=== MENU MAKANAN ===\n";
                        cout << "1. Ayam Geprek\n2. Bakso\n3. Mie Ayam\n4. Ayam Panggang\n";
                        cout << "Pilih (1 - 4): ";
                        cin >> menu_makanan;
                        switch (menu_makanan) {
                            case 1: cout << "Pilihan Anda: Ayam Geprek\n"; break;
                            case 2: cout << "Pilihan Anda: Bakso\n"; break;
                            case 3: cout << "Pilihan Anda: Mie Ayam\n"; break;
                            case 4: cout << "Pilihan Anda: Ayam Panggang\n"; break;
                            default: cout << "Pilihan tidak tersedia.\n"; break;
                        }
                        break;

                    case 2:
                        cout << "\n=== MENU MINUMAN ===\n";
                        cout << "1. Es Teh\n2. Jus Buah\n3. Kopi\n";
                        cout << "Pilih (1 - 3): ";
                        cin >> menu_minuman;

                        switch (menu_minuman) {
                            case 1: cout << "Pilihan Anda: Es Teh\n"; break;
                            case 2: cout << "Pilihan Anda: Jus Buah\n"; break;
                            case 3: cout << "Pilihan Anda: Kopi\n"; break;
                            default: cout << "Pilihan tidak tersedia.\n"; break;
                        }
                        break;

                    default:
                        cout << "Kategori tidak valid.\n"; break;
                }
                break;

            case 4:
                is_keluar = true;
                cout << "\nTerima kasih telah menggunakan program ini.\n";
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }
    }

    return 0;
}
