#include <iostream>
#include "include/mahasiswa.hpp"

using namespace std;

namespace sim {
    // Memanggil constructor class Orang, lalu mengisi sisa variabelnya
    Mahasiswa::Mahasiswa(string input_nama, string input_tgl, string input_nrp, string input_dept) 
        : Orang(input_nama, input_tgl) {
        
        nrp = input_nrp;
        departemen = input_dept;
    }

    void Mahasiswa::tampilkanData() {
        cout << "--- Data Mahasiswa ---" << endl;
        Orang::tampilkanData(); // Menampilkan nama dan tgl lahir dari induk
        cout << "NRP           : " << nrp << endl;
        cout << "Departemen    : " << departemen << endl;
    }
}