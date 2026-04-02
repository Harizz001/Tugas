#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    string nama;
    cout << "Silahkan inputkan nama Anda:" << endl;
    getline(cin, nama);
    cout << "Hello " << nama << endl;

    return 0;
}