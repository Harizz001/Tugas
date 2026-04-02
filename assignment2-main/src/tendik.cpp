#include <iostream>
#include "include/tendik.hpp"

using namespace std;

namespace sim {
    Tendik::Tendik(string input_nama, string input_tgl, string input_nip, string input_unit) 
        : Orang(input_nama, input_tgl) {
        
        nip = input_nip;
        unit_kerja = input_unit;
    }

    void Tendik::tampilkanData() {
        cout << "--- Data Tendik ---" << endl;
        Orang::tampilkanData();
        cout << "NIP           : " << nip << endl;
        cout << "Unit Kerja    : " << unit_kerja << endl;
    }
}