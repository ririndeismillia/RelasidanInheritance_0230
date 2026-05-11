#include <iostream>
#include <vector>
#include <string>
using namespace std;

//penyertaan file header anak.h dan ibu.h
#include "anak.h"
#include "ibu.h"

intmain()
{
    //deklarasi dan pemberian nilai variabel pointer un tuk objrk dari class ibu dan anak
    Ibu* varIbu = new Ibu("rani");
    Ibu* varIbu = new ibu("sari");
    Ibu* varIbu = new Ibu("tono");
    Ibu* varIbu = new Ibu("tiara");
    Ibu* varIbu = new Ibu("dini");

    //panggilan dan pemberian argument pada prosedur tambahAnak()
    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak);
    varIbu->tambahAnak(varAnak3);

    return 0;

}