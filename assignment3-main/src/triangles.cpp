/* 
Anda diminta untuk mengimplementasikan class dengan nama Triangle 
yang didalamnya memuat 3 data dalam class Point2D yang telah diimplementasikan

Tujuan dari program adalah menentukan apakah suatua Triangle adalah 
sama kaki, sama sisi, siku-siku, dan sembarang

Input:
    vector dari suatu Triangle (dengan banyak sebesar 3*N) --> N = total Triangle

Output
    print setiap line dengan "sama kaki", "sama sisi", "siku-siku", atau "sembarang"


Silahkan gunakan teori dan implementasi yang telah diajarkan dikelas
*/

#include <iostream>
#include <math.h>
#include "include/triangles.hpp"

using namespace std;

namespace GeometriSegitiga {

    Triangle::Triangle() {}

    Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3) {
        _t1 = t1;
        _t2 = t2;
        _t3 = t3;
    }

    void Triangle::SetT1(Point2D t1) {
        _t1 = t1;
    }

    void Triangle::SetT2(Point2D t2) {
        _t2 = t2;
    }

    void Triangle::SetT3(Point2D t3) {
        _t3 = t3;
    }

    void Triangle::TriangleType() {
        // Menghitung panjang 3 sisi segitiga menggunakan rumus jarak antara 2 titik
        // Jarak = sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2)
        float a = sqrt(pow(_t2.GetX() - _t1.GetX(), 2) + pow(_t2.GetY() - _t1.GetY(), 2) + pow(_t2.GetZ() - _t1.GetZ(), 2));
        float b = sqrt(pow(_t3.GetX() - _t2.GetX(), 2) + pow(_t3.GetY() - _t2.GetY(), 2) + pow(_t3.GetZ() - _t2.GetZ(), 2));
        float c = sqrt(pow(_t1.GetX() - _t3.GetX(), 2) + pow(_t1.GetY() - _t3.GetY(), 2) + pow(_t1.GetZ() - _t3.GetZ(), 2));

        float eps = 0.001; // nilai toleransi angka desimal (float)

        // cek sama sisi
        if (abs(a - b) < eps && abs(b - c) < eps) {
            cout << "sama sisi" << endl;
        }

        // fix urutan pengecekan, harusnya cek siku-siku dulu baru cek sama kaki
        // cek siku-siku menggunakan teorema Pythagoras
        else if (abs((a*a + b*b) - c*c) < eps || abs((b*b + c*c) - a*a) < eps || abs((a*a + c*c) - b*b) < eps) {
            cout << "siku-siku" << endl;
        } 

        // cek sama kaki
        else if (abs(a - b) < eps || abs(b - c) < eps || abs(a - c) < eps) {
            cout << "sama kaki" << endl;
        }
        
        // segitiga sembarang
        else {
            cout << "sembarang" << endl;
        }
    }
}