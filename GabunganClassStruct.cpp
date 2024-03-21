#include <iostream>
#include <string>
using namespace std;

// Deklarasi class Mahasiswa
class Mahasiswa {
private:
    string nama;
    int umur;

public:
    Mahasiswa(string n, int u) : nama(n), umur(u) {} // Constructor

    void infoMahasiswa() {
        cout << "Nama Mahasiswa: " << nama << endl;
        cout << "Umur Mahasiswa: " << umur << " tahun" << endl;
    }

    ~Mahasiswa() { // Destructor
        cout << "Objek Mahasiswa dihapus." << endl;
    }
};

// Deklarasi struct MataKuliah
struct MataKuliah {
    string namaMataKuliah;
    int sks;
};

int main() {
    // Membuat objek dari class Mahasiswa
    Mahasiswa mhs1("John Doe", 20);
    mhs1.infoMahasiswa();

    // Membuat objek dari struct MataKuliah
    MataKuliah mk1;
    mk1.namaMataKuliah = "Pemrograman";
    mk1.sks = 3;

    cout << "Mata Kuliah: " << mk1.namaMataKuliah << endl;
    cout << "SKS: " << mk1.sks << endl;

    return 0;
}
