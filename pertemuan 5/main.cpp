#include <iostream>
using namespace std;

class Perpustakaan {
protected:
  string buku = "Belajar Matematika";
  string nama = "syahrul";

public:
  string cekPinjaman() {
    return "Buku Belajar Matematika Sudah Dipinjam Oleh syahrul";
  }
};

class Pengembalian : public Perpustakaan {
protected:
  string pengembalian = "Telah di kembalikan";

public:
  string cekKembali() {
    return "Buku Belajar Matematika Sudah Dikembalikan oleh syahrul ";
  }
};


int main() {
  Pengembalian bukuPerpustakaan;

  cout << bukuPerpustakaan.cekPinjaman() << endl;
  cout << bukuPerpustakaan.cekKembali() << endl;

  return 0;
}