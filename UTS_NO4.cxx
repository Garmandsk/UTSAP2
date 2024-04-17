#include <iostream>
using namespace std; //Penambahan namespace

int main () {
    
    system("cls");  //sebaiknya (cls) menggunakan huruf kecil untuk meminimalisir adanya kesalahan dalam program
    
    string a;
    
    umur: //menggunakan titik dua(:) untuk mengaktifkan sintaks goto umur
    
    cout<<"Tebak Umur Saya: "; //kurang titik koma(;)
    
    cin>>a; //tanda panah yang awalnya ke kiri seharusnya ke kanan karena menerima input dari pengguna
    
    //kurangnya penggunaan 2 sama dengan untuk perbandingan(==) dan petik ganda(" ") untuk data yang memiliki tipe data string
    if (a == "20") {
        cout<<"Jawaban Anda Benar"<<endl;
    }
    
    //langsung menggunakan else saja karena tidak adanya bentuk kemungkinan yang lain
    else { 
    cout<<"Jawaban Salah, Coba Lagi..."<<endl; //kurang (;)
    goto umur;
    }
    cout<<"Program Selesai";
    
    return 0;
}