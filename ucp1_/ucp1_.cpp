// ucp1_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string cekDiterima(double nilaiRataRata, double nilaiMatematika) {
    if (nilaiRataRata >= 70 || nilaiMatematika > 80) {
        return "Diterima";
    }
    else {
        return "Tidak diterima";
    }
}

int main() 
{
    string nama[20];
    double nilaiRataRata[20];
    double nilaiMatematika[20];
    string status[20];


    for (int i = 0; i < 20; ++i) {
        cout << "Masukkan nama pendaftar ke-" << i + 1 << ": ";
        cin >> nama[i];
        cout << "Masukkan nilai rata-rata tes untuk " << nama[i] << ": ";
        cin >> nilaiRataRata[i];
        cout << "Masukkan nilai matematika untuk " << nama[i] << ": ";
        cin >> nilaiMatematika[i];
        status[i] = cekditerima(nilaiRataRata[i], nilaiMatematika[i]);
    }

    cout << "\nNama Pendaftar\tStatus\n";
    for (int i = 0; i < 20; ++i) 
    {
        cout << nama[i] << "\t\t" << status[i] << endl;
    }

    char ulangi;
    cout << "\nApakah ingin mengulangi ? (y/n): ";
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y') 
    {
        main();
    }
    else {
        cout << "Terima kasih telah megisi." << endl;
    }

    return 0;
}


 
//   1. - int
//      - string
//      - float
//   2. Else if statement digunakan untuk membuat keputusan berdasarkan kondisi yang diberikan.
//   3. #include <iostream>
//      #include <string>
//      using namespace std;
//      string cekDiterima(double nilaiRataRata, double nilaiMatematika) {
//      if (nilaiRataRata >= 70 || nilaiMatematika > 80) {
//      return "Diterima";
//      }
//      else {
//      return "Tidak diterima"; }
//      }
//      int main() {
//      string nama[20];
//      double nilaiRataRata[20];
//      double nilaiMatematika[20];
//      string status[20];
//      for (int i = 0; i < 20; ++i) {
//      cout << "Masukkan nama pendaftar ke-" << i + 1 << ": ";
//      cin >> nama[i];
//      cout << "Masukkan nilai rata-rata tes untuk " << nama[i] << ": ";
//      cin >> nilaiRataRata[i];
//      cout << "Masukkan nilai matematika untuk " << nama[i] << ": ";
//      cin >> nilaiMatematika[i];
//      status[i] = cekditerima(nilaiRataRata[i], nilaiMatematika[i]);
//      }
//      cout << "\nNama Pendaftar\tStatus\n";
//      for (int i = 0; i < 20; ++i) {
//      cout << nama[i] << "\t\t" << status[i] << endl;
//      }
//      char ulangi;
//      cout << "\nApakah ingin mengulangi ? (y/n): ";
//      cin >> ulangi;
//      if (ulangi == 'y' || ulangi == 'Y')
//      {
//      main();
//      }
//      else {
//      cout << "Terima kasih telah megisi." << endl; }
//      return 0; }

//   4. Prosedur yaitu blok kode yang menjalankan serangkaian pernyataan tanpa mengembalikan nilai. 
//      contoh :    string nama
//                  double nilaiRataRata
//                  double nilaiMatematika
//                  string status
//      fungsi yaitu blok kode yang menjalankan serangkaian pernyataan dan mengembalikan nilia ke pemanggil.
//      contoh :    string cekDiterima(double nilaiRataRata, double nilaiMatematika) {
//                  if (nilaiRataRata >= 70 || nilaiMatematika > 80) {
//                  return "Diterima";}
//                  else {
//                  return "Tidak diterima"; } }
//                  cout << "\nNama Pendaftar\tStatus\n";
//                  for (int i = 0; i < 20; ++i) {
//                  cout << nama[i] << "\t\t" << status[i] << endl; }
//   5. while loop digunakan untuk menjalankan kode selama beberapa kondisi terpenuhi.
