#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];

    nama[0] = "nepnep";
    nama[1] = "fadli";
    nama[2] = "rayhan";
    nama[3] = "kiwil";
    nama[4] = "Eto";

    // Menampilkan isi array
    cout << "Daftar Nama:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}
