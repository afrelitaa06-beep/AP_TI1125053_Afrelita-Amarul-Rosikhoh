/*
* PROJECT KASIR
* Nomor 1: Prosedur Tanpa Parmeter
* Menampilkan daftar barang, menghitung total belanja,
* dan mencetak struk pembelian menggunakan prosedur tanpa parameter
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ========================================================
// DATA BARANG (variabel global)
// ========================================================
string namaBarang[3] = {"Sarden", "Sabun", "Minyak"};
double hargaBarang[3] = {15000, 5000, 20000};
int jumlahBeli[3] = {0, 0, 0};
double totalBelanja = 0;

// ========================================================
// PROSEDUR TANPA PARAMETER
// ========================================================

// Prosedur : Menampilkan daftar barang
void tampilDaftarBarang() {
    cout << "=====================================================" << endl;
    cout << "                   DAFTAR BARANG TERSEDIA            " <<endl;
    cout << "=====================================================" << endl;
    cout << left
         << setw(5) << "No"
         << setw(12) << "Nama Barang"
         << setw(12) << "Harga"
         << endl;
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << left
             << setw(5) << (to_string(i + 1) + ".")
             << setw(12) << namaBarang[i]
             << "Rp " << right << setw(8) << hargaBarang[i]
             << endl;
    }
    cout << "=====================================================" << endl;
}

// Prosedur : Input jumlah pembelian
void inputPembelian() {
    cout << "\n--- INPUT JUMLAH PEMBELIAN ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Jumlah beli " << namaBarang[i] << " : ";
        cin >> jumlahBeli[i];
    }
}

// Proedur : Menghitung total belanja
void hitungTotal() {
    totalBelanja = 0;
    for (int i = 0; i < 3; i++) {
        totalBelanja += hargaBarang[i] * jumlahBeli[i];
    }
}

// Prosedur : Mencetak struk pembelian
void cetakStruk() {
    cout << "\n=================================================" << endl;
    cout << "                   STRUK PEMBELIAN              " << endl;
    cout << "                 TOKO SEMBAKO MAKMUR            " << endl;
    cout << "================================================" << endl;
    cout << left
         << setw(12) << "Barang"
         << setw(6) << "Qty"
         << setw(10) << "Harga"
         << setw(12) << "Subtotal"
         << endl;
    cout << "------------------------------------------------" << endl;
    for (int i=0; i < 3; i++) {
        if (jumlahBeli[i] > 0) {
            double subtotal = hargaBarang[i] * jumlahBeli[i];
            cout << left
                 << setw(12) << namaBarang[i]
                 << setw(6) << jumlahBeli[i]
                 << "Rp " << setw(8) << hargaBarang[i]
                 << "Rp " << setw(8) << subtotal
                 << endl;
        }
    
    }
    cout << "---------------------------------------------------" << endl;
    cout << "TOTAL PEMBAYARAN : Rp " << totalBelanja << endl;
    cout << "===================================================" << endl;
    cout << " Terima kasih telah berbelanja! " << endl;
    cout << "===================================================" << endl;

}

// ==========================================
// MAIN PROGRAM
// ==========================================
int main() {
    tampilDaftarBarang();
    inputPembelian();
    hitungTotal();
    cetakStruk();
    return 0;
}