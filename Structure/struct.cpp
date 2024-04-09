#include <iostream>
using namespace std;
struct Mahasiswa {
  // komponen / member
  string nim, nama, jurusan;
  int umur;
  string hobi[3];
} mhs1, mhs2;
int main() {
  string hobiMahasiswa[3] = {"Berenang", "Membaca", "Menulis"};
  // cara 1
  mhs1.nim = "F55121082";
  mhs1.nama = "Febriyadi";
  mhs1.jurusan = "Teknik Informatika";
  mhs1.umur = 20;

  for (int i = 0; i < 3; ++i) {
    mhs1.hobi[i] = hobiMahasiswa[i];
  }

  cout << "NPM Mahasiswa 1 :" << mhs1.nim << endl;
  cout << "Nama Mahasiswa 1 : " << mhs1.nama << endl;
  cout << "Jurusan Mahasiswa 1 : " << mhs1.jurusan << endl;
  cout << "Umur Mahasiswa 1 : " << mhs1.umur << endl;
  cout << "Hobi Mahasiswa 1 : " << mhs1.hobi[0] << endl;
  // cara 2
  mhs2 = {"F55121077",
          "Yunita",
          "Teknik Informatika",
          21,
          {"Mancing", "Ngoding", "Nonton"}};
  cout << "\nNPM Mahasiswa 2:" << mhs2.nim << endl;
  cout << "Nama Mahasiswa 2 : " << mhs2.nama << endl;
  cout << "Jurusan Mahasiswa 2 : " << mhs2.jurusan << endl;
  cout << "Umur Mahasiswa 2: " << mhs2.umur << endl;
  cout << "Hobi Mahasiswa 1 : " << mhs2.hobi[1] << endl;

  // Cara 3
  Mahasiswa mhs3 = {"F55121077",
                    "Anggeraini",
                    "Teknik Informatika",
                    21,
                    {"Mancing", "Ngoding", "Nonton"}};
  cout << "\nNPM Mahasiswa 2:" << mhs3.nim << endl;
  cout << "Nama Mahasiswa 2 : " << mhs3.nama << endl;
  cout << "Jurusan Mahasiswa 2 : " << mhs3.jurusan << endl;
  cout << "Umur Mahasiswa 2: " << mhs3.umur << endl;
  cout << "Hobi Mahasiswa 1 : " << mhs3.hobi[1] << endl;
}