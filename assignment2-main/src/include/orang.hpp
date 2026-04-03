#ifndef ORANG_HPP
#define ORANG_HPP
#include <string>

namespace sim {
    class Orang {
    protected:
        // Variabel milik class
        std::string nama;
        std::string tanggal_lahir;

    public:
        // Constructor dasar
        Orang(std::string input_nama, std::string input_tgl);
        
        // Fungsi virtual agar bisa ditimpa oleh class anaknya
        virtual void tampilkanData();
    };
}
#endif