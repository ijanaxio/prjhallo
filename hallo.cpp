#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;

    cout << "Masukkan jumlah nama yang akan dimasukkan: ";
    cin >> jumlah;
    cin.ignore(); // Membersihkan buffer newline

    // Alokasi array dinamis
    string* nama = new string[jumlah];

    // Input nama-nama
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }

    // Menampilkan isi array
    cout << "\nDaftar Nama:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    // Menghapus alokasi dinamis
    delete[] nama;

    return 0;
}
