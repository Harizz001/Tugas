#include <iostream>
#include "include/dosen.hpp"

using namespace std;

namespace sim {
    Dosen::Dosen(string input_nama, string input_tgl, string input_npp, string input_ahli) 
        : Orang(input_nama, input_tgl) {
        
        npp = input_npp;
        keahlian = input_ahli;
    }

    void Dosen::tampilkanData() {
        cout << "--- Data Dosen ---" << endl;
        Orang::tampilkanData();
        cout << "NPP           : " << npp << endl;
        cout << "Keahlian      : " << keahlian << endl;
    }
}