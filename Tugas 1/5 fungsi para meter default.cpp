#include <iostream>
using namespace std;

// Jika 'kali' tidak diisi, otomatis dianggap 1
void tampilkanGaris (intpanjang = 10) {
    for(int i = 0; i <panjang; i++) {
        cout << "-";
    }
    cout << endl;
}

int main() {
    tampilkanGaris(); //Menggunakan nilai defailt (10)
    tampilkanGaris(20); //Menggunakan nilai 20
    return 0;
}