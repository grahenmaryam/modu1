#include <iostream>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    int umur;
};

int main() {
    Siswa siswa1;
    siswa1.nama = "Anne";
    siswa1.umur = 20;

    cout << "Nama Siswa: " << siswa1.nama << endl;
    cout << "Umur Siswa: " << siswa1.umur << " tahun" << endl;

    return 0;
}
