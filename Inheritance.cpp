#include <iostream>
#include <string>
using namespace std;

//pembuatan class orang
class orang {
public:
   //deklarasi member variabel dari class orang
   string nama;
   
   //pembuatan constructor dan desctructor dari class orang 
   orang(string pNama) :nama(pNama) {
      cout << "Orang dibuat\n" << endl;
   }

   ~orang() {
       cout << "Orang dihapus\n" << endl;
   }

   //pembuatan function jumlah
   int jumlah(int a,int b) {
      return a + b;
    }
};

//pembuatan classs pelajar sebagai pewaris dari class orang
class pelajar : public orang {
public:
     //deklarasi member variabel dari class pelajar
     string sekolah;
     
     //pembuatan constructor dan desctructor dari class pelajar
     pelajar(string pNama, string pSekolah) :orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
     }

     //pembuatan function perkenalan()
     string perkenalan() {
        return "Hallo, nama saya " + nama + "dari sekolah " + sekolah + "\n\n";

     }

    };

    int main()
    {
        //deklarasi dan pemberian nilai untuk variabel object siswa1
        pelajar siswa1("andi laksono","SMA 1 Bantul");
        //panggilan function perkanalan dari class pelajar
        cout << siswa1.perkenalan();
        //pemanggil function warisan dari class orang kepada class object
        cout << "Hasil = " << siswa1.jumlah(10,90) << endl;

        return 0;
    }
