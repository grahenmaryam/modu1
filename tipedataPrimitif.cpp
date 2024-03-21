#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi
float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung keliling persegi
float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

int main() {
    float sisi;
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;

    // Memanggil fungsi hitungLuasPersegi
    float luas = hitungLuasPersegi(sisi);
    cout << "Luas persegi dengan sisi " << sisi << " adalah: " << luas << endl;

    // Memanggil fungsi hitungKelilingPersegi
    float keliling = hitungKelilingPersegi(sisi);
    cout << "Keliling persegi dengan sisi " << sisi << " adalah: " << keliling << endl;

    return 0;
}
