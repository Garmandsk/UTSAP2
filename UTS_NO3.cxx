#include <iostream>
#include <cmath>
using namespace std;

//Mulai
int main () {
    
    //Deklarasi Variabel
    int n1, n2, jumlah1 = 0, jumlah2 = 0;

    /*Tampilan Utama Untuk Pengguna Dapat Memasukkan Nilai n */    cout<<"________________________________________________________________________"<<endl;
    cout<<"n: "; cin>>n1; 
    cout<<"n: "; cin>>n2;
   
   //Perulangan Dan Kondisi Yang Dibutuhkan Untuk Mengambil Hanya Bilangan Ganjil Dan Dikuadratkan Kemudian Menampilkan Perulangan Kudrat Dan Hasil Yang Sudah Dijumlahkan Untuk Input-an Pertama
   cout<<endl<<"n: "<<n1<<" // ";
    for (int i = 1; i <= n1; ++i) {
        if (i % 2 == 1) {
            jumlah1 = jumlah1 + pow(i, 2);
            cout<<i<<"^2 "<<" + ";
            
        }
        
    }
    cout<<"0 = "<<jumlah1<<endl;
    
    //Perulangan Dan Kondisi Yang Dibutuhkan Untuk Mengambil Hanya Bilangan Ganjil Dan Dikuadratkan Kemudian Menampilkan Hasil Yang Sudah Dijumlahkan Untuk Input-an Kedua
    for (int j = 1; j <= n2; ++j) {
        if (j % 2 == 1) {
            jumlah2 = jumlah2 + pow(j, 2);
        }     
    }
    cout<<"n: "<<n2<<" = "<<jumlah2<<endl; cout<<"________________________________________________________________________"<<endl;
    
    //Selesai
    return 0;
}