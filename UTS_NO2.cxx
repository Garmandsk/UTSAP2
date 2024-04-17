#include <iostream>
using namespace std;

//Mulai
int main () {
    
    //Deklarasi Variabel
    int pil;
    
    //Tampilan Yang Muncul Guna Pengguna Untuk Memasukkan Capres dan Cawapresnya
    cout<<"________________________________________________________________________"<<endl;
    cout<<"Daftar Calon Presiden dan Wakil Presiden 2024: "<<endl;    
    cout<<"1. Anies Baswedan dan Muhaimin Iskandar"<<endl;
    cout<<"2. Prabowo Subianto dan Gibran Rakabuming Raka"<<endl;
    cout<<"3. Ganjar Pranowo dan Mahfud MD"<<endl; cout<<"________________________________________________________________________"<<endl;
    
    cout<<endl<<endl;
    cout<<"Masukkan Pilihan Presiden Anda: "; cin>>pil; cout<<endl;
    
    //Kondisi Yang Dibutuhkan Untuk Menampilkan Kembali Pilihan Yang Sudah Dipilih Oleh Pengguna
    switch (pil) {
    case 1: cout<<"Pilihan Anda Telah Disimpan."<<endl<<"Pilihan Anda Adalah 1. Anies Baswedan dan Muhaimin Iskandar"<<endl; break;
    case 2: cout<<"Pilihan Anda Telah Disimpan."<<endl<<"Pilihan Anda Adalah 2. Prabowo Subianto dan Gibran Rakabuming Raka"<<endl; break;
    case 3: cout<<"Pilihan Anda Telah Disimpan."<<endl<<"Pilihan Anda Adalah 3. Ganjar Pranowo dan Mahfud MD"<<endl; break;
    default: cout<<"Tidak Termasuk Dalam Pasangan Capres Dan Cawapres"<<endl;
    }
    
    //Selesai
    return 0;
}