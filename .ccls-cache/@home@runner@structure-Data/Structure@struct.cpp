// #include <iostream>
// using namespace std;
// struct Mahasiswa {
//   // komponen / member
//   string nim, nama, jurusan;
//   int umur;
//   string hobi[3];
// } mhs1, mhs[1];
// int main() {
//   string hobiMahasiswa[3] = {"Berenang", "Membaca", "Menulis"};

//   // Array dalam structure
//   Mahasiswa mhs[3];
//   // cara 1
//   mhs[0].nim = "F55121082";
//   mhs[0].nama = "Febriyadi";
//   mhs[0].jurusan = "Teknik Informatika";
//   mhs[0].umur = 20;

//   for (int i = 0; i < 3; ++i) {
//     mhs[0].hobi[i] = hobiMahasiswa[i];
//   }

//   cout << "NPM Mahasiswa 1 :" << mhs[0].nim << endl;
//   cout << "Nama Mahasiswa 1 : " << mhs[0].nama << endl;
//   cout << "Jurusan Mahasiswa 1 : " << mhs[0].jurusan << endl;
//   cout << "Umur Mahasiswa 1 : " << mhs[0].umur << endl;
//   cout << "Hobi Mahasiswa 1 : " << mhs[0].hobi[0] << endl;
//   // cara 2
//   mhs[1] = {"F55121077",
//             "Yunita",
//             "Teknik Informatika",
//             21,
//             {"Mancing", "Ngoding", "Nonton"}};
//   cout << "\nNPM Mahasiswa 2:" << mhs[1].nim << endl;
//   cout << "Nama Mahasiswa 2 : " << mhs[1].nama << endl;
//   cout << "Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
//   cout << "Umur Mahasiswa 2: " << mhs[1].umur << endl;
//   cout << "Hobi Mahasiswa 1 : " << mhs[1].hobi[1] << endl;

//   // Cara 3
//   mhs[2] = {"F55121077",
//             "Anggeraini",
//             "Teknik Informatika",
//             21,
//             {"Mancing", "Ngoding", "Nonton"}};
//   cout << "\nNPM Mahasiswa 2:" << mhs[2].nim << endl;
//   cout << "Nama Mahasiswa 2 : " << mhs[2].nama << endl;
//   cout << "Jurusan Mahasiswa 2 : " << mhs[2].jurusan << endl;
//   cout << "Umur Mahasiswa 2: " << mhs[2].umur << endl;
//   cout << "Hobi Mahasiswa 1 : " << mhs[2].hobi[1] << endl;
// }