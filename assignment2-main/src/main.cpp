#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim;

int main(int argc, char ** argv)
{
    cout << "PROGRAM SIM AKADEMIK SEDERHANA\n";
    cout << "==============================\n\n";

    // 1. Membuat objek satu per satu secara manual
    Mahasiswa mhs1("Kukuh", "20 Jul 2006", "5024251039", "Teknik Komputer");
    Dosen dosen1("Pak Budi", "15 Feb 1980", "19800215", "Pemrograman Lanjut");
    Tendik tendik1("Mbak Citra", "20 Mar 1995", "19950320", "Tata Usaha");

    // 2. Memanggil fungsi untuk menampilkan data
    mhs1.tampilkanData();
    cout << "\n"; // Memberi jarak antar data
    
    dosen1.tampilkanData();
    cout << "\n";
    
    tendik1.tampilkanData();
    cout << "\n";

    return 0;
}