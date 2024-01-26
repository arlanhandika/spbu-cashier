#include <iostream>

using namespace std;

struct BBM {
    int pilih;
    int maxstock=1500;
    int turbostock=1500;
    int litestock=1500;
    int solarstock=1500;
    int dexstock=1500;
    float belimax;
    float beliturbo;
    float belilite;
    float belisolar;
    float belidex;
};

    BBM bbm;

    float total_liter_max=0;
    float total_liter_turbo=0;
    float total_liter_lite=0;
    float total_liter_solar=0;
    float total_liter_dex=0;
    int total_uang_max=0;
    int total_uang_turbo=0;
    int total_uang_lite=0;
    int total_uang_solar=0;
    int total_uang_dex=0;
    float total_stock_max=1500;
    float total_stock_turbo=1500;
    float total_stock_lite=1500;
    float total_stock_solar=1500;
    float total_stock_dex=1500;

void transaksi (){
    int pilih [5]={1,2,3,4,5};
    string jenis_bbm [5]={"Pertamax", "Pertamax Turbo", "Pertalite", "Solar", "Dexlite"};

    cout<<"------------------------------------------------"<<endl;
    cout<<"|  Kode |\tJenis BBM\t|  Harga/Liter |"<<endl;
    cout<<"|   1   |\tPertamax\t|   Rp13.000   |"<<endl;
    cout<<"|   2   |\tPertamax Turbo\t|   Rp15.000   |"<<endl;
    cout<<"|   3   |\tPertalite\t|   Rp10.000   |"<<endl;
    cout<<"|   4   |\tSolar\t\t|   Rp7.000    |"<<endl;
    cout<<"|   5   |\tDexlite\t\t|   Rp15.000   |"<<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"\nPilih jenis BBM: ";
    cin>>bbm.pilih;

    if (bbm.pilih==1){
        cout<<"Masukkan nomimal uang yang ingin dibayarkan: ";
        cin>>bbm.belimax;
        cout<<"\nJenis BBM yang dipilih: "<<jenis_bbm[0];
        cout<<"\nJumlah liter yang akan diisi: "<<bbm.belimax/13000<<" liter"<<endl;
        total_liter_max+=bbm.belimax/13000;
        total_uang_max+=bbm.belimax;
        total_stock_max=bbm.maxstock-total_liter_max;
        }
    else if (bbm.pilih==2){
        cout<<"Masukkan nomimal uang yang ingin dibayarkan: ";
        cin>>bbm.beliturbo;
        cout<<"\nJenis BBM yang dipilih: "<<jenis_bbm[1];
        cout<<"\nJumlah liter yang akan diisi: "<<bbm.beliturbo/15000<<" liter"<<endl;

        total_liter_turbo+=bbm.beliturbo/15000;
        total_uang_turbo+=bbm.beliturbo;
        total_stock_turbo=bbm.turbostock-total_liter_turbo;
        }
    else if (bbm.pilih==3){
        cout<<"Masukkan nomimal uang yang ingin dibayarkan: ";
        cin>>bbm.belilite;
        cout<<"\nJenis BBM yang dipilih: "<<jenis_bbm[2];
        cout<<"\nJumlah liter yang akan diisi: "<<bbm.belilite/10000<<" liter"<<endl;
        total_liter_lite+=bbm.belilite/10000;
        total_uang_lite+=bbm.belilite;
        total_stock_lite=bbm.litestock-total_liter_lite;
        }
    else if (bbm.pilih==4){
        cout<<"Masukkan nomimal uang yang ingin dibayarkan: ";
        cin>>bbm.belisolar;
        cout<<"\nJenis BBM yang dipilih: "<<jenis_bbm[3];
        cout<<"\nJumlah liter yang akan diisi: "<<bbm.belisolar/7000<<" liter"<<endl;
        total_liter_solar+=bbm.belisolar/7000;
        total_uang_solar+=bbm.belisolar;
        total_stock_solar=bbm.solarstock-total_liter_solar;
        }
    else if (bbm.pilih==5){
        cout<<"Masukkan nomimal uang yang ingin dibayarkan: ";
        cin>>bbm.belidex;
        cout<<"\nJenis BBM yang dipilih: "<<jenis_bbm[4];
        cout<<"\nJumlah liter yang akan1 diisi: "<<bbm.belidex/15000<<" liter"<<endl;
        total_liter_dex+=bbm.belidex/15000;
        total_uang_dex+=bbm.belidex;
        total_stock_dex=bbm.dexstock-total_liter_dex;
        }
    else
        cout<<"Pilihan tidak valid.";
}

void data_penjualan(){
    int hargamax=13000;
    int hargaturbo=15000;
    int hargalite=10000;
    int hargasolar=7000;
    int hargadex=15000;

    cout<<"Jumlah uang yang terkumpul dari BBM Pertamax:\t    Rp"<<total_uang_max<<endl;
    cout<<"Jumlah uang yang terkumpul dari BBM Pertamax Turbo: Rp"<<total_uang_turbo<<endl;
    cout<<"Jumlah uang yang terkumpul dari BBM Pertalite:\t    Rp"<<total_uang_lite<<endl;
    cout<<"Jumlah uang yang terkumpul dari BBM Solar:\t    Rp"<<total_uang_solar<<endl;
    cout<<"Jumlah uang yang terkumpul dari BBM Dexlite:\t    Rp"<<total_uang_dex<<endl;
    cout<<"Jumlah seluruh uang yang terkumpul:  Rp"<<total_uang_max+total_uang_turbo+total_uang_lite+total_uang_solar+total_uang_dex<<endl;

    cout<<"\nJumlah BBM Pertamax terjual:\t   "<<total_liter_max<<" liter\t Sisa stock: "<<total_stock_max<<" liter"<<endl;
    cout<<"Jumlah BBM Pertamax Turbo terjual: "<<total_liter_turbo<<" liter\t Sisa stock: "<<total_stock_turbo<<" liter"<<endl;
    cout<<"Jumlah BBM Pertalite terjual:\t   "<<total_liter_lite<<" liter\t Sisa stock: "<<total_stock_lite<<" liter"<<endl;
    cout<<"Jumlah BBM Solar terjual:\t   "<<total_liter_solar<<" liter\t Sisa stock: "<<total_stock_solar<<" liter"<<endl;
    cout<<"Jumlah BBM Dexlite terjual:\t   "<<total_liter_dex<<" liter\t Sisa stock: "<<total_stock_dex<<" liter"<<endl;
    cout<<"Total seluruh liter yang terjual:  "<<total_liter_max+total_liter_turbo+total_liter_lite+total_liter_solar+total_liter_dex<<" liter"<<endl;
}

int main (){
    int pil;
    string kembali;
    char y,n;

menu:
    system ("cls");
    cout<<"----------------------------------------"<<endl;
    cout<<"|   Selamat Datang di SPBU PERNAMITA   |"<<endl;
    cout<<"----------------------------------------"<<endl;

    cout<<"\n1. Transaksi";
    cout<<"\n2. Cek Data Penjualan";
    cout<<"\n3. Keluar";
    cout<<"\n\nMasukkan pilihan: ";
    cin>>pil;
    switch(pil){

    case 1:
        system ("cls");
        transaksi();
        cout<<"\n\nKetik 'y' untuk kembali ke menu: ";
        cin>>kembali;
        if (kembali=="y"){
            goto menu;}
    case 2:
        system ("cls");
        data_penjualan();
        cout<<"\n\nKetik 'y' untuk kembali ke menu: ";
        cin>>kembali;
        if (kembali=="y"){
            goto menu;}
    case 3:
        exit(0);
    default:
    goto menu;
}
}
