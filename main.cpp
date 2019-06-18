#include <iostream>
#include <conio.h>
#define MAX 100

using namespace std;
struct menu {
    struct kursi {
        int kursi_kosong[2], kursi_terisi[2];
    }panggon;

    struct tiket {
        int jenis_tkt, jumlah_tkt, total_tkt;
        int tiket_anak[2], tiket_dewasa[2], total[2];
    }tiket;

    int tail, head;
}bioskop;

void antrian(){
    

}

void beli() {

}

void cek_kursi() {

}

int main() {
    int pilihan;
    cout << "1. Antrian \n2. Pembelian tiket \n3. Cek sisa kursi \n4. Laporan penjualan tiket \n5. Keluar \n";
    cout << "Masukkan pilihan : "; cin >> pilihan;

    switch (pilihan) {
    case 1 :
        break;
    case 2 :
        break;
    case 3 :
        break;
    case 4 :
        break;
    } while (pilihan != 5) {
        cout << "exit..\n";
    }
}
