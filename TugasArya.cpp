
#include <iostream>
using namespace std;


class bangun_ruang
{
public:
    
    int s,r,t,la,ls,lt,st,lu;
    double vo;



    void kubus()
    {
        cout<<endl;
        cout<<"\"Menghitung Luas Permukaan Kubus \""<<endl;
        cout<<" Masukkan Nilai sisi  : ";cin>>s;
        lu=6*(s*s);
        cout<<" Luas Permukaan Kubus : "<<lu<<endl;

        cout<<endl;
        cout<<"\"Menghitung Volume Kubus \""<<endl;
        cout<<" Masukkan Nilai sisi : ";cin>>s;
        vo=s*s*s;
        cout<<" Volume Kubus        : "<<vo<<endl;
    }
    
    void kerucut()
     {
        cout<<endl;
        cout<<"\"Menghitung Luas Permukaan Kerucut \""<<endl;
        cout<<" Masukkan Nilai Luas Alas : ";cin>>la;
        cout<<" Masukkan Nilai Luas Selimut: ";cin>>ls;
        lu=la*ls;
        cout<<" Luas Permukaan Kerucut        : "<<lu<<endl;

        cout<<endl;
        cout<<"\"Menghitung Volume Kerucut \""<<endl;
        cout<<" Masukkan Nilai Jari-jari Alas : ";cin>>s;
        cout<<" Masukkan Nilai Tinggi Kerucut : ";cin>>t;
        vo=0.333*3.14*s*s*t;
        cout<<" Volume Kerucut                : "<<vo<<endl;
    }

    void limas()
    {
        cout<<endl;
        cout<<"\"Menghitung Luas Permukaan Limas \""<<endl;
        cout<<" Masukkan Nilai Luas Alas : ";cin>>la;
        cout<<" Masukkan Nilai Jumlah Sisi Tegak  : ";cin>>st;
        lu=la*st;
        cout<<" Luas Permukaan Limas                  : "<<lu<<endl;

        cout<<endl;
        cout<<"\"Menghitung Volume Limas \""<<endl;
        cout<<" Masukkan Nilai Jumlah Sisi Tegak : ";cin>>st;
        vo=0.333*st;
        cout<<" Volume Limas                          : "<<vo<<endl;
    }

    void tabung()
    {
        cout<<endl;
        cout<<"\"Menghitung Luas Permukaan Tabung \""<<endl;
        cout<<" Masukkan Nilai Luas Alas    : ";cin>>la;
        cout<<" Masukkan Nilai Luas Selimut : ";cin>>ls;
        lu=la*ls;
        cout<<" Luas Permukaan Kubus         : "<<lu<<endl;

        cout<<endl;
        cout<<"\"Menghitung Volume Tabung \""<<endl;
        cout<<" Masukkan Nilai Luas Alas    : ";cin>>la;
        cout<<" Masukkan Nilai Tinggi Tabung : ";cin>>t;
        vo=la*t;
        cout<<" Volume Tabung               : "<<lu<<endl;
    }


    void bola()
    {
        cout<<endl;
        cout<<"\"Menghitung Luas Permukaan Bola \""<<endl;
        cout<<" Masukkan Nilai Jari-jari : ";cin>>r;
        lu=4*3.14*r*r;
        cout<<" Luas Permukaan bola      : "<<lu<<endl;
        
        cout<<endl;
        cout<<"\"Menghitung Volume Bola \""<<endl;
        cout<<" Masukkan Nilai Jari-jari : ";cin>>r;
        vo=4/3*3.14*r*r*r;
        cout<<" Volume Bola              : "<<vo<<endl;
    }

};



int main()
{    
    int pilih;
atas:
        cout<<" Menu Bangun Ruang: "<<endl;
        cout<<"1.KUBUS"<<endl;
        cout<<"2.KERUCUT"<<endl;
        cout<<"3.LIMAS"<<endl;
        cout<<"4.TABUNG"<<endl;
        cout<<"5.BOLA"<<endl;
        cout<<"0.KELUAR"<<endl;
        cout<<"Pilihan : ";

    cout<<"Masukkan Menu Yang Anda Ingin Cari [0.1.2.3.4.5] --> ";cin>>pilih;
     bangun_ruang nya;
    switch (pilih)

    {
    case 1:nya.kubus();
        goto atas;
        break;
    case 2:nya.kerucut();
        goto atas;
        break;
    case 3:nya.limas();
        goto atas;
        break;
    case 4:nya.tabung();
        goto atas;
        break;
    case 5:nya.bola();
        goto atas;
        break;
    case 0:break;

    system("pause");
    return 0;
}


}
