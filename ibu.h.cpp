#include <iostream>
#ifndef IBU_H
#define IBU_H
using namespace std;

class anak;

//membuat class ibu pada file header ibu.h
class ibu {
public: 
    //deklarasi member variable pada class ibu
    string nama;
    vector<anak*> daftar_anak;

    //membuat constructor dan destructor pada class ibu
    Ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    };

    ~Ibu() {
       cout << "Ibu \"" << nama << "\" tidak ada\n";
    };

    //pendefinisian prosedur - prosedur pada class ibu dii luar class
    void Ibu::tambahkan(anak* pAnak){
        daftar_anak_push_back(pAnak);
    }

    void Ibu::cetakanak() {
        cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
        for (auto& a : daftar_anak)
        {
            cout << endl;
        }

        #endif
    }
      
}