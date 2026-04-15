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
        // Jarak = sqrt((x2 - x1)^2 + (y2 - y1)^2)
        float a = sqrt(pow(_t2.GetX() - _t1.GetX(), 2) + pow(_t2.GetY() - _t1.GetY(), 2));
        float b = sqrt(pow(_t3.GetX() - _t2.GetX(), 2) + pow(_t3.GetY() - _t2.GetY(), 2));
        float c = sqrt(pow(_t1.GetX() - _t3.GetX(), 2) + pow(_t1.GetY() - _t3.GetY(), 2));

        float eps = 0.001; // nilai toleransi angka desimal (float)

        if (abs(a - b) < eps && abs(b - c) < eps) {
            cout << "sama sisi" << endl;
        } else if (abs(a - b) < eps || abs(b - c) < eps || abs(a - c) < eps) {
            cout << "sama kaki" << endl;
        } else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2)) {
            cout << "siku-siku" << endl;
        } else {
            cout << "sembarang" << endl;
        }
    }
}