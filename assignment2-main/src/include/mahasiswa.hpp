#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP
#include "orang.hpp"
#include <string>

namespace sim {
    class Mahasiswa : public Orang {
    private:
        std::string nrp;
        std::string departemen;

    public:
        Mahasiswa(std::string input_nama, std::string input_tgl, std::string input_nrp, std::string input_dept);
        void tampilkanData(); 
    };
}
#endif