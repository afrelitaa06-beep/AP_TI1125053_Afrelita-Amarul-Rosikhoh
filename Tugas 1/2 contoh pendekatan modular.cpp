#include <iostream>
using namespace std;

// MODULE 1: Fungsi Perhitungan (Logika Matematika)
int hitungTotal (int h, int j) {
    return h * j;
}
// MODULE 2: Fungsi Tampilan (Interaksi User)
void cetakStruk (int hasil) {
    cout << "===============================" <<endl;
    cout << "TOTAL BAYAR: Rp" <<hasil <<endl;
    cout << "===============================" <<endl;

}

int main () {
    int total = hitungTotal (50000, 3) ; // Memanggil modul hitung
    cetakStruk (total); // Memanggil modul cetak
    return 0;
}