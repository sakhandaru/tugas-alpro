#include <iostream>

using namespace std;

typedef struct sepeda{
    string merk,type;
    int tahun,harga;
}sepeda1;

int main()
{
    sepeda1 sepeda={"0","0",0,0};
    sepeda1 *pSepeda;
    pSepeda = &sepeda;

    pSepeda->merk = "Polygon";
    pSepeda->type = "Sepeda Gunung";
    pSepeda->tahun = 2013;
    pSepeda->harga = 2000000;

    cout << "Merk = " << pSepeda->merk << endl;
    cout << "Type = " << pSepeda->type << endl;
    cout << "Tahun = " << pSepeda->tahun << endl;
    cout << "Harga = " << pSepeda->harga << endl;

    return 0;
}
