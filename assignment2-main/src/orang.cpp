#include <iostream>
#include "include/orang.hpp"

using namespace std;

namespace sim {
    // Cara pemula memasukkan nilai: diisi satu-satu ke dalam variabel
    Orang::Orang(string input_nama, string input_tgl) {
        nama = input_nama;
        tanggal_lahir = input_tgl;
    }

    void Orang::tampilkanData() {
        cout << "Nama          : " << nama << endl;
        cout << "Tanggal Lahir : " << tanggal_lahir << endl;
    }
}