// pada penerimaan mahasiswa baru tercatat ada 20 kondisi yang telah terdaftar, kemudian diadakan tes 
// tertulis untuk 2 mata pelajaran yaitu matematika dan bahasa inggris, nilai dari hasil tes tersenut
//  kemuadian diolah dengan menggunakan bantuan program computer dengan ketentuan sebagai berikut :
//     1. seorang kandidat dinyatakan terima jika nilai rata-rata dari kedua tes tersebut tidak kurang dari 70 
//         atau nilai matematikanya lebih dari 80
//     2. nama pendaftar dan status diterima/tidaknya dasri 20 kandidat tersebut disimpan kemudian ditampilkan
//         seperti berikut :
//         Nama Status
//         Aaron   diterima
//         Tia     diterima
//         Joko    ditolak
//     3. Tampilkan total berapa kondisi yang diterima dan kondisi yang diterima
//     4. terdapat prosedur/fungsi yang mengembalikan nilai dan yang tidak mengembalikan nilai

#include <iostream>
using namespace std;

int main(){

    double nilaiMath, nilaiBeng;
    float rata;
    string status, nama;

    cout << "masukan nama siswa : ";
    cin >>  nama;
    cout << "masukan nilai matematika : ";
    cin >>  nilaiMath;
    cout << "Masukkan nilai bahasa inggris";
    cin >> nilaiBeng;

    rata = (nilaiMath + nilaiBeng)/2;
   

    if (rata >= 70 || nilaiMath>= 80 ){
        status = "lulus";
    }else {
        status ="gagal"
    }

    cout << "Nama   Status ";
    cout <<  nama + status;

}
