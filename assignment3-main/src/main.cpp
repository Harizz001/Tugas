#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;
using namespace GeometriSegitiga;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;
    int n;

    cout << "=== Program Analisis Jenis Segitiga ===" << endl;
    cout << "Masukkan jumlah segitiga yang ingin dianalisis: ";
    if (!(cin >> n) || n <= 0) { // fix bug input jumlah segitiga, harus positif dan valid
        cerr << "Error: Jumlah segitiga tidak valid!" << endl;
        return 1;
    }

    /*--------------------------
    Buat loop untuk membuat menginputkan data triangle (3 buah X Y Z data) ke dalam
    variable triangles
    --------------------------*/
    for (int i = 0; i < n; i++) {
        float x1, y1, z1, x2, y2, z2, x3, y3, z3;

        cout << "Masukkan data untuk segitiga ke-" << (i + 1) << " (format: x1 y1 z1 x2 y2 z2 x3 y3 z3): " << endl;
        cout << ">> ";

        if (!(cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3)) {
            cerr << "Error: Input tidak valid!" << endl;
            break;
        }

        Point2D t1(x1, y1, z1);
        Point2D t2(x2, y2, z2);
        Point2D t3(x3, y3, z3);

        Triangle triangle(t1, t2, t3);
        triangles.push_back(triangle);
    }

    /*------------------------*/

    /*--------------------------
    Implementasikan kode untuk melakukan pengecekan apakah data pada variable triangles
    adalah "sama kaki", "sama sisi", "siku-siku", atau "sembarang"
    --------------------------*/
    cout << "\n=== Hasil Analisis Jenis Segitiga ===" << endl;

    for (size_t i = 0; i < triangles.size(); i++) { // size_t digunakan untuk menghindari peringatan "signed/unsigned mismatch" (fix warning)
        cout << "Segitiga ke-" << (i + 1) << ": ";
        triangles[i].TriangleType();
    }

    /*------------------------*/

    return 0;
}