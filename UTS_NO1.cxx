#include <iostream> 
using namespace std; 

//Mulai
int main (){
    
    //Deklarasi Variabel Yang Dibutuhkan Di Dalam Program
    string nama, nim, matkul, nama_dosen, nilai_huruf;
    char kom;
    float nilai, nilai_tugas, nilai_kuis, nilai_uts, nilai_uas;
    
    
    
     /*Tampilan Yang Muncul Guna User Memasukkan Data Yang Diperlukan*/      cout<<"________________________________________________________________________"<<endl;
     cout<<"Masukkan Nama Anda: "; getline(cin, nama);
     cout<<"Masukkan NIM Anda: "; cin>>nim;
     cout<<"Masukkan KOM Anda: "; cin>>kom; cin.ignore();
     cout<<"Nama Mata Kuliah: "; getline(cin, matkul);
     cout<<"Masukkan ""Nilai Tugas"" Mata Kuliah Tersebut: "; cin>>nilai_tugas;
     
     //Penggunaan Kondisi Agar Pengguna Hanya Dapat Memasukkan Rentan Nilai 0 - 100
     if (nilai_tugas < 0 || nilai_tugas > 100) {
         cout<<"Rentan Nilai Adalah 0 - 100"<<endl;
         return 0;
     }
     
     cout<<"Masukkan ""Nilai Kuis"" Mata Kuliah Tersebut: "; cin>>nilai_kuis;
    if (nilai_kuis < 0 || nilai_kuis > 100) {
         cout<<"Rentan Nilai Adalah 0 - 100"<<endl;
         return 0;
     }
     
     cout<<"Masukkan ""Nilai UTS"" Mata Kuliah Tersebut: "; cin>>nilai_uts;
     if (nilai_uts < 0 || nilai_uts > 100) {
         cout<<"Rentan Nilai Adalah 0 - 100"<<endl;
         return 0;
     }
     
     cout<<"Masukkan ""Nilai UAS"" Mata Kuliah Tersebut: "; cin>>nilai_uas; cin.ignore();
     if (nilai_uas < 0 || nilai_uas > 100) {
         cout<<"Rentan Nilai Adalah 0 - 100"<<endl;
         return 0;
     }
     
         cout<<"Masukkan Nama Dosen Pembimbing Akademik (PA) Anda: "; getline(cin, nama_dosen);
     cout<<"________________________________________________________________________"<<endl;
     
     //Penghitungan Nilai Total
     nilai = (nilai_tugas + nilai_kuis + nilai_uts + nilai_uas) / 4;
     
     //Kondisi Yang Digunakan Untuk Menentukan Nilai Dalam Bentuk Huruf
    if (nilai >= 81 && nilai <= 100){
    nilai_huruf = "A";
    }
    else if (nilai >= 74 && nilai <= 80){
    nilai_huruf = "B+";
    }
    else if (nilai >= 66 && nilai <= 73){
    nilai_huruf = "B";
    }
    else if (nilai >= 59 && nilai <= 65){
    nilai_huruf = "C+";
    }
    else if (nilai >= 51 && nilai <= 58){
    nilai_huruf = "C";
    }
    else if (nilai >= 41 && nilai <= 50){
    nilai_huruf = "D";
    }
    else if (nilai >= 0 && nilai <= 40){
    nilai_huruf = "E";
    }

     else {
         cout<<"Minimal 0 Dan Maksimal 100";
     }
     
     cout<<endl<<endl;
        
         /*Output Kartu Hasil Studi*/ cout<<"|______________________________________________________________________|"<<endl;
     cout<<"|Kartu Hasil Studi                                                     |"; cout<<endl<<"|______________________________________________________________________|"<<endl;
     cout<<"|Nama           : "<<nama<<endl;
     cout<<"|NIM            : "<<nim<<endl;
     cout<<"|KOM            : "<<kom<<endl;
     cout<<"|Mata Kuliah    : "<<matkul<<endl;
     cout<<"|Nilai          : "<<nilai_huruf<<endl;
     cout<<"|Dosen PA       : "<<nama_dosen<<endl;
     cout<<"|______________________________________________________________________|"<<endl;
     cout<<"|______________________________________________________________________|";
     
     
     //Selesai
    return 0;
}