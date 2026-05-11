#ifndef ANAK_H
#define ANAK_H

//membuat class anak du file header anak.h
class anak {
public:
    //deklarsi member variabel pada class anak
    string nama;
    
    //membuat constructor dan descructor pada  class anak
    anak(string pNama) : nama(pNama) {
        cout << "Anak \"" << nama << "\" ada \n";
    }

    ~anak() {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif