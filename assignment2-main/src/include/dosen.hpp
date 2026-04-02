#ifndef DOSEN_HPP
#define DOSEN_HPP
#include "orang.hpp"
#include <string>

namespace sim {
    class Dosen : public Orang {
    private:
        std::string npp;
        std::string keahlian;

    public:
        Dosen(std::string input_nama, std::string input_tgl, std::string input_npp, std::string input_ahli);
        void tampilkanData();
    };
}
#endif