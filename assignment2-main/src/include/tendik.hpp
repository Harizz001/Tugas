#ifndef TENDIK_HPP
#define TENDIK_HPP
#include "orang.hpp"
#include <string>

namespace sim {
    class Tendik : public Orang {
    private:
        std::string nip;
        std::string unit_kerja;

    public:
        Tendik(std::string input_nama, std::string input_tgl, std::string input_nip, std::string input_unit);
        void tampilkanData();
    };
}
#endif