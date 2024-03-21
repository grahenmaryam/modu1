#include <iostream>
#include <map>
using namespace std;

int main() {
    // Mendefinisikan map dengan key bertipe string dan value bertipe int
    map<string, int> nilaiSiswa;

    // Menambahkan nilai-nilai ke dalam map
    nilaiSiswa["John"] = 85;
    nilaiSiswa["Jane"] = 92;
    nilaiSiswa["Doe"] = 78;

    // Mengakses nilai dari map menggunakan key
    cout << "Nilai John: " << nilaiSiswa["John"] << endl;
    cout << "Nilai Jane: " << nilaiSiswa["Jane"] << endl;
    cout << "Nilai Doe: " << nilaiSiswa["Doe"] << endl;

    return 0;
}
