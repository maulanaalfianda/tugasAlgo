#include <iostream>
using namespace::std;

int main(){
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"bayu","irvan","susi","diana","roni"};

    string n,namaku,cari,member,barang;
    int indeks,jumlah,total,jum=5;
    int harga,diskon;


cout<<"1.non member"<<endl;
cout<<"2.member"<<endl;
    cout<<"masukan pilih : ";cin>>member;



 if(member=="1")
    {cout<<"Masukan nama anda:";cin>>n;
 cout<<"\n jumlah barang yg di beli : ";cin>>jumlah;

        cout<<"\nnama barang : ";cin>>barang;
        cout<<"\n Harga : ";cin>>harga;

        total=jumlah*harga;

        cout<<"semua:"<<total;
        return 0;}

      else  if (member=="2"){
            cout<<"masukan no id: ";cin>>cari;
            for (int i=0;i<jum;i++){
                if(cari==nomor[i]){
                    namaku=nama[i];
                }
            }
            cout<<"anda member"<<endl;
            cout<<"id : "<<cari<<endl;
            cout<<"nama :"<<namaku;

        cout<<"\n jumlah barang yg di beli : ";cin>>jumlah;


        cout<<"\nnama barang : ";cin>>barang;
        cout<<"\n Harga : ";cin>>harga;

        total=jumlah*harga;


    cout<<"\nselamat anda mendapatkan diskon 5%";
    total=total*5/100;

 cout<<"\nsemua:"<<total;

}

}
