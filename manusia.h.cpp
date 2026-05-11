#ifndef MANUSIA_H
#define MANUSIA_H
//membuat class manusia di file header manusia.h
class Manusia {
public:
    //membuat member variabel class manusia
    string nama;
    Jantung varJantung;

    //membuat constructor dan descructor class manusia
    Manusia(string pName) : name(pName) {
        cout << name << "Hidup\n";
    }

    ~Manusia() {
        cout << name << "Mati\n";
    }
};
#endif // !MANUSIA_H