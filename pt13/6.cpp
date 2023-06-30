#include <iostream>

using namespace std;

enum Kendaraan1{sepeda,mobil,motor,brt};

int main()
{
    int kendaraan = 1;
    if(kendaraan == Kendaraan1::sepeda)
        cout << "naik sepeda aja biar sehat";
    else if(kendaraan == Kendaraan1::mobil)
        cout << "naik mobil aja biar gak kepanasan";
    else if(kendaraan == Kendaraan1::motor)
        cout << "naik motor aja biar sat set sat set";
    else if (kendaraan == Kendaraan1::brt)
        cout << "naik brt aja biar hemat bensin";
    return 0;
}
